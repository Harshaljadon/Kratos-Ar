using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

internal class LoadWithLocation : MonoBehaviour
{
    public Dictionary<string, AsyncOperationHandle<GameObject>> operationDictionary;
    public AsyncOperationHandle<IList<IResourceLocation>> locations;
    public List<string> keys,locationPrimayKey;
    public List<AsyncOperationHandle> loadOps;
    public UnityEvent Ready;

    IEnumerator LoadAndAssociateResultWithKey(IList<string> keys)
    {
        if (operationDictionary == null)
            operationDictionary = new Dictionary<string, AsyncOperationHandle<GameObject>>();

         locations = Addressables.LoadResourceLocationsAsync(keys,
                Addressables.MergeMode.Union, typeof(GameObject));

        yield return locations;

         loadOps = new List<AsyncOperationHandle>(locations.Result.Count);

            foreach (IResourceLocation location in locations.Result)
            {
                AsyncOperationHandle<GameObject> handle =
                    Addressables.LoadAssetAsync<GameObject>(location);
                handle.Completed += obj => { operationDictionary.Add(location.PrimaryKey, obj);

                    locationPrimayKey.Add(location.PrimaryKey);


                };
                loadOps.Add(handle);
            }

        yield return Addressables.ResourceManager.CreateGenericGroupOperation(loadOps, true);

       Ready.Invoke();
    }

    void Start()
    {
        Ready.AddListener(OnAssetsReady);
        StartCoroutine(LoadAndAssociateResultWithKey(keys));
    }
    private void OnEnable()
    {
        if (clearChild)
        {

            StartCoroutine(nameof(RunAgain));
        }
    }

    IEnumerator RunAgain()
    {
        foreach (IResourceLocation location in locations.Result)
        {
            AsyncOperationHandle<GameObject> handle =
                Addressables.LoadAssetAsync<GameObject>(location);
            handle.Completed += obj => operationDictionary.Add(location.PrimaryKey, obj);
            loadOps.Add(handle);
        }
        yield return Addressables.ResourceManager.CreateGenericGroupOperation(loadOps, true);
        Ready.AddListener(OnAssetsReady);
    }

    private void OnAssetsReady()
    {
        float x = 0, z = 0;
        foreach (var item in operationDictionary)
        {
            Debug.Log($"{item.Key} = {item.Value.Result.name}");
            Instantiate(item.Value.Result,
                new Vector3(x++ * 2.0f, 0, z * 2.0f),
                Quaternion.identity, transform);
            if (x > 9)
            {
                x = 0;
                z++;
            }
        }
    }
    bool clearChild;
    private void OnDestroy()
    {
        foreach (var item in operationDictionary)
        {
            Addressables.Release(item.Value);
        }
        if (loadOps.Count != 0)
        {
            loadOps.Clear();
        }
        if (operationDictionary.Count != 0)
        {
            operationDictionary.Clear();
        }
        Addressables.ResourceManager.Dispose();
        clearChild = true;
    }
}