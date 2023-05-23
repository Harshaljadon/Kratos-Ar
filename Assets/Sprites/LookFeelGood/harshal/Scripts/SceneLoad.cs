using System;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

public class SceneLoad : MonoBehaviour
{
    AsyncOperationHandle<SceneInstance> handler;
    SceneInstance m_LoadedScene;
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    public void LoadSceneAddresable()
    {
        Addressables.LoadSceneAsync("sceneName", LoadSceneMode.Additive).Completed += SceneLoad_Completed;
    }

    private void SceneLoad_Completed(AsyncOperationHandle<SceneInstance> obj)
    {
        if (obj.Status == AsyncOperationStatus.Succeeded)
        {
            handler = obj;
            m_LoadedScene = obj.Result;
        }
    }

    public void UnLoadSceneAddresable()
    {
        Addressables.UnloadSceneAsync(handler, true).Completed += SceneLoad_Completed1;
    }

    private void SceneLoad_Completed1(AsyncOperationHandle<SceneInstance> obj)
    {
        if (obj.Status == AsyncOperationStatus.Succeeded)
        {
            m_LoadedScene = new SceneInstance();
        }
    }

}
