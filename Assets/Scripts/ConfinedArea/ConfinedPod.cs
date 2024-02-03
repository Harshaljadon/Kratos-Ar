﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityEngine.AddressableAssets;
//using UnityEngine.ResourceManagement.AsyncOperations;
//using UnityEngine.ResourceManagement.ResourceLocations;


namespace AR2
{

    /*public class ComponentRefeenceConfinedPod : ComponentReference<ConfinedPod>
    {
        public ComponentRefeenceConfinedPod (string guid) : base (guid)
        {

        }
    }*/

    public class ConfinedPod : MonoBehaviour
    {
        public string podName = "";
        public Sprite icon;

        public List<Transform> brackets = new List<Transform>();
        public List<Transform> winches = new List<Transform>();
        public List<Transform> retractables = new List<Transform>();

        private List<ConfinedPodItem> winchesConfinedPodItem = new List<ConfinedPodItem>();
        private List<ConfinedPodItem> retractableConfinedPodItem = new List<ConfinedPodItem>();

        public GameObject radhePrefab;
        public ConfinedRope winchRope;
        public ConfinedRope retractableRope;

        public Transform radheSpawnPoint;

        private PodAnimation podAnimation;
        private Radhe spawnedRadhe;

        private void Awake()
        {
            podAnimation = GetComponent<PodAnimation>();
        }

        public void SetRopeStartPosition(ConfinedItemType confinedItemType, Vector3 pos)
        {
            if(confinedItemType == ConfinedItemType.Winch)
            {
                winchRope.SetStartPoint(pos);
            }
            else if(confinedItemType == ConfinedItemType.Retractable)
            {
                retractableRope.SetStartPoint(pos);
                
            }
        }

        public void SpawnRadhe()
        {
            if (spawnedRadhe == null)
            {
                // now add radheModel and setup rope
                spawnedRadhe = Instantiate(radhePrefab, radheSpawnPoint.position, Quaternion.identity, transform).GetComponent<Radhe>();

                retractableRope.endPoint.position = spawnedRadhe.retractbleEndPoint.position;
                winchRope.endPoint.position = spawnedRadhe.winchEndPoint.position;

            }
        }

         List<GameObject> All_brackets = new List<GameObject>();
        bool previouslyDoneBracket;
        //AsyncOperationHandle<GameObject> handleBracketGameObject, handleWinchGameObject, handleSRLGameObject;
        //List<AsyncOperationHandle<GameObject>> winchHandler, sRLhandler, bracketHandle;
        private void Start()
        {
            //bracketHandle = new List<AsyncOperationHandle<GameObject>>();
            //ResInv();


        }

        //void ResInv()
        //{
        //    winchHandler = new List<AsyncOperationHandle<GameObject>>();
        //    sRLhandler = new List<AsyncOperationHandle<GameObject>>();
        //    bracketHandle = new List<AsyncOperationHandle<GameObject>>();
        //}

        private void OnDestroy()
        {
            //if (handleBracketGameObject.IsValid())
            //{

            //Addressables.Release(handleBracketGameObject);
            //}

            //if (handleWinchGameObject.IsValid())
            //{
            //Addressables.Release(handleWinchGameObject);
            //}
            //if (handleSRLGameObject.IsValid())
            //{
            //    Addressables.Release(handleSRLGameObject);
            //}

            //foreach (var item in bracketHandle)
            //{
            //    if (item.IsValid())
            //    {
            //        Addressables.Release(item);
            //    }
            //}
            //bracketHandle.Clear();
            //foreach (var item in winchHandler)
            //{
            //    if (item.IsValid())
            //    {
            //        Addressables.Release(item);
            //    }
            //}
            //winchHandler.Clear();
            //foreach (var item in sRLhandler)
            //{
            //    if (item.IsValid())
            //    {
            //        Addressables.Release(item);
            //    }
            //}
            //sRLhandler.Clear();
           

        }
        internal void SetItems(ConfinedItemType item,string nameLocRes, GameObject ObjPrefab) //Dictionary<string,IResourceLocation> a ,
        {
            switch (item)
            {
                case ConfinedItemType.Brackets:
                    {
                        //for (int i = 0; i < bracketHandle.Count; i++)
                        //{
                        //    if (bracketHandle[i].IsValid())
                        //    {
                        //        Addressables.Release(bracketHandle[i]);
                        //    }
                        //}
                        foreach (var bracket in brackets)
                        {
                            // remove previous
                            if (bracket.childCount > 0)
                            {
                                for (int i = 0; i < bracket.childCount; i++)
                                {
                                    Destroy(bracket.GetChild(i).gameObject);
                                }
                            }
                            // add new 
                            Instantiate(ObjPrefab, bracket);
                            //handleBracketGameObject = Addressables.LoadAssetAsync<GameObject>(a[nameLocRes]);
                            //handleBracketGameObject.Completed += op =>
                            //{
                            //    Instantiate(op.Result, bracket1);
                            //    bracketHandle.Add(op);
                            //};
                        }
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        foreach (var winch in winches)
                        {
                            if (winch.childCount > 0)
                            {
                                for (int i = 0; i < winch.childCount; i++)
                                {
                                    Destroy(winch.GetChild(i).gameObject);
                                }

                                //Addressables.Release(handleWinchGameObject);
                                winchesConfinedPodItem.Clear();
                            }
                                GameObject go = Instantiate(ObjPrefab, winch);
                                go.GetComponent<ConfinedPodItem>().itemType = item;
                                winchesConfinedPodItem.Add(go.GetComponent<ConfinedPodItem>());

                            //handleWinchGameObject = Addressables.LoadAssetAsync<GameObject>(a[nameLocRes]);
                            //handleWinchGameObject.Completed += op =>
                            //{
                            //    var a = op.Result;
                            //    winchHandler.Add(op);
                            //};



                        }
                        winchRope.UpdateLifeline();

                        foreach (var retractable in retractables)
                        {
                            if (retractable.childCount > 0)
                            {
                                AnimateEverything();
                            }
                        }

                    }
                    break;
                case ConfinedItemType.Retractable:
                    {
                        foreach (var retractable in retractables)
                        {
                            // remove previous
                            if (retractable.childCount > 0)
                            {
                                for (int i = 0; i < retractable.childCount; i++)
                                {
                                    Destroy(retractable.GetChild(i).gameObject);
                                }
                                retractableConfinedPodItem.Clear();
                            }
                            GameObject go = Instantiate(ObjPrefab, retractable);
                            retractableConfinedPodItem.Add(go.GetComponent<ConfinedPodItem>());
                            go.GetComponent<ConfinedPodItem>().itemType = item;
                            // add new
                            //handleSRLGameObject = Addressables.LoadAssetAsync<GameObject>(a[nameLocRes]);
                            //handleSRLGameObject.Completed += op =>
                            //{
                            //    var a = op.Result;
                
                            //    sRLhandler.Add(op);
                            //};
    

                        }

                        foreach (var winch in winches)
                        {
                            if (winch.childCount > 0)
                            {
                                AnimateEverything();

                            }
                        }
                    }
                    break;
                default:
                    break;
            }
        }


        private void AnimateEverything()
        {
            // animate Everything
            foreach (var winch in winchesConfinedPodItem)
            {
                winch.canAnimate = true;
            }
            podAnimation.canAnimate = true;
        }

        private void Update()
        {
            if(podAnimation.canAnimate && spawnedRadhe != null)
            {
                spawnedRadhe.transform.position = podAnimation.radheAttachPoint.position;
                retractableRope.endPoint.position = spawnedRadhe.retractbleEndPoint.position;
                winchRope.endPoint.position = spawnedRadhe.winchEndPoint.position;

                retractableRope.UpdateLifeline();
                winchRope.UpdateLifeline();
            }
        }
    }
}