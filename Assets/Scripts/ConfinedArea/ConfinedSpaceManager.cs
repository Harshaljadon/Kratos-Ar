using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

namespace AR2
{
    public enum ConfinedItemType
    {
        Pod,
        Brackets,
        Winch,
        Retractable,
    }
    public class ConfinedSpaceManager : MonoBehaviour
    {
        [System.Serializable]
        public class ComponentDetails
        {
            public string name;
            public Sprite icon;
        }
        [System.Serializable]
        public class ItemInfo
        {
            public ConfinedItemType type;
            public List<ComponentDetails> details = new List<ComponentDetails>();
        }


        public List<AssetReference> podAssetRef = new List<AssetReference>();
        public List<AssetReference> bracketsAssetRef = new List<AssetReference>();
        public List<AssetReference> winchesAssetRef = new List<AssetReference>();
        public List<AssetReference> retractablesAssetRef = new List<AssetReference>();

        [SerializeField]
        public List<ItemInfo> ItemInfos = new List<ItemInfo>();

        public ConfinedPod currentActive { get; private set; }
        public bool Pods_IsReady { get => m_Pods_IsReady; private set => m_Pods_IsReady = value; }
        public bool BracketsIsReady { get => bracketsIsReady; set => bracketsIsReady = value; }
        public bool RetractablesIsReady { get => retractablesIsReady; set => retractablesIsReady = value; }

        public Transform sceneItemHolder;

        public MeshRenderer groundPlane;
        private Texture2D loadedTexture;

        int m_Pods_ToLoadCount, brackets_ToLoadCount, winches_ToLoadCount, retractables_ToLoadCount;
        bool m_Pods_IsReady, bracketsIsReady, winchesIsReady, retractablesIsReady;

        

        private void Start()
        {
            
            groundPlane.gameObject.SetActive(false);

            m_Pods_ToLoadCount = podAssetRef.Count;
            brackets_ToLoadCount = bracketsAssetRef.Count;
            winches_ToLoadCount = winchesAssetRef.Count;
            retractables_ToLoadCount = retractablesAssetRef.Count;

            StartCoroutine(nameof(LoadingMulipleAsset));

        }
        public Dictionary<string, bool> namePodStatausDic, nameWinchStatausDic,nameBracketStatusDic,nameSRLStatusDic;
        public Dictionary<string, IResourceLocation> namePodResLoc,nameWinchResLoc,nameBrackResLoc,nameSrlResLoc;
        public AsyncOperationHandle<IList<IResourceLocation>> podResouceLocations, winchResouceLocations, bracketResLocation,srlResLocation;
        public List<string> keys;

        IEnumerator LoadingMulipleAsset()
        {
            if (namePodStatausDic == null) 
                namePodStatausDic = new Dictionary<string, bool>();
            if (namePodResLoc == null)
                namePodResLoc = new Dictionary<string, IResourceLocation>();
            podResouceLocations = Addressables.LoadResourceLocationsAsync(podAssetRef,
                   Addressables.MergeMode.Union, typeof(GameObject));
            yield return podResouceLocations;

            if (nameBracketStatusDic == null)
                nameBracketStatusDic = new Dictionary<string, bool>();
            if (nameBrackResLoc == null)
                nameBrackResLoc = new Dictionary<string, IResourceLocation>();
            bracketResLocation = Addressables.LoadResourceLocationsAsync(bracketsAssetRef,
                   Addressables.MergeMode.Union, typeof(GameObject));
            yield return bracketResLocation;


            foreach (IResourceLocation location in podResouceLocations.Result)
            {
                AsyncOperationHandle<GameObject> handle =
                    Addressables.LoadAssetAsync<GameObject>(location);
                handle.Completed += op =>
                {
                    m_Pods_ToLoadCount--;
                    var a = location.PrimaryKey;
                    namePodStatausDic.Add(a, true);
                    namePodResLoc.Add(a, location);
                    if (m_Pods_ToLoadCount <= 0)
                    {
                        Pods_IsReady = true;
                        foreach (IResourceLocation location in bracketResLocation.Result)
                        {
                            Addressables.LoadAssetAsync<GameObject>(location).Completed += OnShapeLoaded_brackets =>
                            {
                                brackets_ToLoadCount--;
                                var a = location.PrimaryKey;
                                nameBracketStatusDic.Add(a, true);
                                nameBrackResLoc.Add(a, location);
                                if (brackets_ToLoadCount <= 0)
                                {
                                    bracketsIsReady = true;
                                    Addressables.Release(OnShapeLoaded_brackets);
                                }

                            };
                        }
                    }
                                    Addressables.Release(handle);
                };
              
            }

            if (nameWinchStatausDic == null)
                nameWinchStatausDic = new Dictionary<string, bool>();
            if (nameWinchResLoc == null)
                nameWinchResLoc = new Dictionary<string, IResourceLocation>();
            
            
            winchResouceLocations = Addressables.LoadResourceLocationsAsync(winchesAssetRef,
                   Addressables.MergeMode.Union, typeof(GameObject));
            yield return podResouceLocations;


            if (nameSRLStatusDic == null)
                nameSRLStatusDic = new Dictionary<string, bool>();
            if (nameSrlResLoc == null)
                nameSrlResLoc = new Dictionary<string, IResourceLocation>();
            srlResLocation = Addressables.LoadResourceLocationsAsync(retractablesAssetRef, Addressables.MergeMode.Union, typeof(GameObject));
            yield return nameSrlResLoc;



            foreach (IResourceLocation location in winchResouceLocations.Result)
            {
                AsyncOperationHandle<GameObject> handle =
                    Addressables.LoadAssetAsync<GameObject>(location);
                handle.Completed += op =>
                {
                    var a = location.PrimaryKey;
                    winches_ToLoadCount--;
                    nameWinchStatausDic.Add(a, true);
                    nameWinchResLoc.Add(a, location);
                    if (winches_ToLoadCount <= 0)
                    {
                        winchesIsReady = true;
                        foreach (IResourceLocation location in srlResLocation.Result)
                        {
                            Addressables.LoadAssetAsync<GameObject>(location).Completed += OnShapeLoaded_brackets =>
                            {
                                retractables_ToLoadCount--;
                                var a = location.PrimaryKey;
                                nameSRLStatusDic.Add(a, true);
                                nameSrlResLoc.Add(a, location);
                                if (retractables_ToLoadCount <= 0)
                                {
                                    retractablesIsReady = true;
                                    Addressables.Release(OnShapeLoaded_brackets);
                                }

                            };
                        }

                    }
                                    Addressables.Release(handle);
                };
            }
        }
        int previousPodindex;
        AsyncOperationHandle<GameObject> handleGameObject;
        List<AsyncOperationHandle<GameObject>> podHandleGameObj = new List<AsyncOperationHandle<GameObject>>();
        public void SelectItem(ConfinedItemType itemType, int index, string buttonName)
        {
            switch (itemType)
            {
                case ConfinedItemType.Pod:
                    {
                        if (currentActive?.gameObject)
                        {
                            Destroy(currentActive.gameObject);
                                Addressables.Release(handleGameObject);
                            //Destroy(sceneItemHolder.GetChild(0).gameObject);
                            
                        }
                        if (Pods_IsReady)
                        {
                            handleGameObject = Addressables.LoadAssetAsync<GameObject>(namePodResLoc[buttonName]);
                            previousPodindex = index;
                            //handleGameObject = podAssetRef[index].InstantiateAsync(sceneItemHolder);
                            handleGameObject.Completed += op =>
                            {
                                var a = op.Result;
                                GameObject go =  Instantiate(a, sceneItemHolder);
                                currentActive = go.GetComponent<ConfinedPod>();
                                podHandleGameObj.Add(op);
                            };
                        }
                        //currentActive = InstantiateAsync(pods[index], sceneItemHolder).GetComponent<ConfinedPod>();
                    }
                    break;
                case ConfinedItemType.Brackets:
                    {
                        if (bracketsIsReady)
                        {
                        currentActive.SetItems(itemType, buttonName, nameBrackResLoc, bracketsAssetRef[index]);
                        }
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        if (winchesIsReady)
                        {
                        currentActive.SetItems(itemType, buttonName, nameWinchResLoc, winchesAssetRef[index]);
                        }
                    }
                    break;
                case ConfinedItemType.Retractable:
                    {
                        if (retractablesIsReady)
                        {
                        currentActive.SetItems(itemType, buttonName,nameSrlResLoc, retractablesAssetRef[index]);
                        }
                    }
                    break;
                default:
                    break;
            }

            
        }
        #region hide
        private void OnDestroy()
        {
            if (podResouceLocations.IsValid())
            {
                Addressables.Release(podResouceLocations);
            }
            if (winchResouceLocations.IsValid())
            {
                Addressables.Release(winchResouceLocations);

            }
            if (handleGameObject.IsValid())
            {
                Addressables.Release(handleGameObject);
            }
            foreach (var item in podHandleGameObj)
            {
                if (item.IsValid())
                {
                    Addressables.Release(item);
                }
            }
            if (podHandleGameObj != null)
            {
                podHandleGameObj.Clear();
            }
            foreach (var shape in podAssetRef)
            {
                if (shape != null && shape.IsValid())
                    shape.ReleaseAsset();
            }
            foreach (var shape in bracketsAssetRef)
            {
                if (shape != null && shape.IsValid())
                    shape.ReleaseAsset();
            }
            foreach (var shape in winchesAssetRef)
            {
                if (shape != null && shape.IsValid())
                    shape.ReleaseAsset();
            }
            foreach (var shape in retractablesAssetRef)
            {
                if (shape != null && shape.IsValid())
                    shape.ReleaseAsset();
            }
            
            if (namePodStatausDic != null)
            {
                namePodStatausDic.Clear();
            }
            if (nameWinchStatausDic != null)
            {
                nameWinchStatausDic.Clear();
            }
            
            if (namePodResLoc != null)
            {
                nameWinchResLoc.Clear();
            }
            if (nameWinchResLoc != null)
            {
                nameWinchResLoc.Clear();
            }
 

        }
        #endregion

        private void OnApplicationFocus(bool focus)
        {
            
        }

        public Sprite GetItemIcon(int index, ConfinedItemType type)
        {
            Sprite sp = null;

            foreach (var item in ItemInfos)
            {
                if(item.type == type)
                {
                    sp = item.details[index].icon;
                }
            }

            return sp;
        }

        public string GetItemName(int index, ConfinedItemType type)
        {
            string str = null;

            foreach (var item in ItemInfos)
            {
                if(item.type == type)
                {
                    str = item.details[index].name;
                }
            }

            return str;
        }


        public void LoadImageFromGallery()
        {
            NativeGallery.Permission permission = NativeGallery.GetImageFromGallery( ( path ) =>
            {
                if( path != null )
                {
                    if (loadedTexture)
                    {
                        Destroy(loadedTexture);
                    }
                    
                    // Create Texture from selected image
                    loadedTexture = NativeGallery.LoadImageAtPath(path);
                    if( loadedTexture == null )
                    {
                        Debug.Log( "Couldn't load texture from " + path );
                        return;
                    }
                    
                    groundPlane.gameObject.SetActive(true);
                    groundPlane.material.mainTexture = loadedTexture;
                }
            }, "Select a image", "image/*" );
            
        }
    }
}

