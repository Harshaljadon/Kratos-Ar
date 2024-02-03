using System;
using System.Collections;
using System.Collections.Generic;
using Object = UnityEngine.Object;
using Random = UnityEngine.Random;
using UnityEngine;

namespace ModularBuildingsFramework.Demo
{
	public class Demo : MonoBehaviour
	{
        /// ======================================================================

        [SerializeField] private List<Object> builders;

        [SerializeField]
        int _builderIndex;
        [SerializeField]
        float _draftLength = 7f;
        [SerializeField]
        float _draftHeight = 20f;
        [SerializeField]
        float _draftDepth = 7;
        private bool _isRunDecorators = true;

        //private Camera sceneCamera;
        [SerializeField]
        Transform[] target;
        public Transform[] Targets { get { return target; } }
        [SerializeField]
        bool isDraftDirty;
                
        /// ======================================================================

        public bool IsDraftDirty
        { get { return isDraftDirty; }
            set { isDraftDirty = value; StartCoroutine(DoRebuild()); } }

        public int builderIndex
        {
            get { return _builderIndex; }
            set
            {
                _builderIndex = value;
                isDraftDirty = true;
            }
        }
        public float draftLength
        {
            get { return _draftLength; }
            set
            {
                _draftLength = value;
                //isDraftDirty = true;
            }
        }
        public float draftHeight
        {
            get { return _draftHeight; }
            set
            {
                _draftHeight = value;
                isDraftDirty = true;
            }
        }
        public float draftDepth
        {
            get { return _draftDepth; }
            set
            {
                _draftDepth = value;
                //isDraftDirty = true;
            }
        }
        public bool isRunDecorators
        {
            get { return _isRunDecorators; }
            set
            {
                _isRunDecorators = value;
                isDraftDirty = true;
            }
        }

        public BuildingSize[] buildingSize;
        public BuildingSize[] BuildingSize
        {
            get { return buildingSize; }
            set { buildingSize = value;
                isDraftDirty = true;
            }
        }

        /// ======================================================================

        private void Awake()
        {
            //sceneCamera = GameObject.Find("SCENE/MainCamera").GetComponent<Camera>();
            //target = new GameObject("TARGET").transform;

            //draftLength = 20f;
            //draftHeight = 20f;
            //draftDepth = 20f;

            //isRunDecorators = true;
            StartCoroutine(DoRebuild());
            //sceneCamera.enabled = false;
        }


        //IEnumerator CreateBuilding()
        //{
        //    StartCoroutine(DoRebuild());


        //}

        #region demoUi

        public void RequestRebuild()
        {
            isDraftDirty = true;
                //Debug.Log("RequestRebuild");
        }

        #endregion

        //[ContextMenu("call")]
        protected virtual IEnumerator DoRebuild()
        {
            //yield return new WaitForSeconds(1f);
            while (isDraftDirty)
            {
                yield return new WaitForEndOfFrame();

                if (isDraftDirty)
                {
                    var targetSiz = target.Length;
                    for (int i = 0; i < targetSiz; i++)
                    {
                        builderIndex = i;
                        Utils.DeleteChilds(target[builderIndex]);
                        //UpdateTargetPosition();

                        var draft = CreateDraft();
                        var builder = GetBuilder();
                        builder.Build(draft);

                        if (isRunDecorators)
                            Utils.RunDecorators(target[builderIndex]);
                    }
                    yield return new WaitForEndOfFrame();

                    for (int i = 0; i < targetSiz; i++)
                    {
                        target[i].GetComponent<AluRailHolder>().CHangesOccur = true;
                    }

                    builderIndex = 0;
                    isDraftDirty = false;
                }
            }
        }

        //private void UpdateTargetPosition()
        //{
        //    //target.position = Vector3.zero - target.right * draftLength * 0.5f - target.forward * draftDepth * 0.5f;

        //}
        protected virtual BoxDraft CreateDraft()
        {
            var result = BoxDraft.Create();
            result.Parse(target[builderIndex]);

            //result.length = draftLength;
            result.length = buildingSize[builderIndex].Length;
            result.height = draftHeight;
            result.depth = buildingSize[builderIndex].Depth;
            //result.depth = draftDepth;

            return result;
        }

        public List<Object> GetBuilders()
        {
            return builders;
        }
        protected IBoxBuilder GetBuilder()
        {
            return builders[builderIndex] as IBoxBuilder;
        }

        /// ======================================================================

        public Demo()
        {
            builders = new List<Object>();
        }

        /// ======================================================================
    }
}