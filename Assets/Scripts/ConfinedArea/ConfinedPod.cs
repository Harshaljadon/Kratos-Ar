using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace AR2
{

    public class ConfinedPod : MonoBehaviour
    {
        public string podName = "";
        public Sprite icon;

        public List<Transform> brackets = new List<Transform>();
        public List<Transform> winches = new List<Transform>();
        public List<Transform> retractables = new List<Transform>();

        private List<ConfinedPodItem> rotatableWinches = new List<ConfinedPodItem>();

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


        internal void SetItems(ConfinedItemType item, GameObject ObjPrefab)
        {
            switch (item)
            {
                case ConfinedItemType.Brackets:
                    {
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

                        }
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        foreach (var winch in winches)
                        {
                            // remove previous
                            if (winch.childCount > 0)
                            {
                                for (int i = 0; i < winch.childCount; i++)
                                {
                                    Destroy(winch.GetChild(i).gameObject);
                                }
                                rotatableWinches.Clear();
                            }

                            // add new 
                            GameObject gameObject = Instantiate(ObjPrefab, winch);
                            gameObject.GetComponent<ConfinedPodItem>().itemType = item;
                            rotatableWinches.Add(gameObject.GetComponent<ConfinedPodItem>());
                        }
                        winchRope.UpdateLifeline();

                        if(podAnimation.canAnimate)
                        {
                            AnimateEverything();
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
                            }

                            // add new 
                            GameObject gameObject = Instantiate(ObjPrefab, retractable);
                            gameObject.GetComponent<ConfinedPodItem>().itemType = item;
                        }

                        AnimateEverything();
                    }
                    break;
                default:
                    break;
            }
        }

        private void AnimateEverything()
        {
            // animate Everything
            foreach (var winch in rotatableWinches)
            {
                winch.canAnimate = true;
            }
            podAnimation.canAnimate = true;
        }

        private void Update()
        {
            if(podAnimation.canAnimate)
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