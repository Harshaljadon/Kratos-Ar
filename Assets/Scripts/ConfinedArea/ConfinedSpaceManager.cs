using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

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


        public List<GameObject> pods = new List<GameObject>();
        public List<GameObject> brackets = new List<GameObject>();
        public List<GameObject> winches = new List<GameObject>();
        public List<GameObject> retractables = new List<GameObject>();

        [SerializeField]
        public List<ItemInfo> ItemInfos = new List<ItemInfo>();

        public ConfinedPod currentActive { get; private set; }

        public Transform sceneItemHolder;

        public MeshRenderer groundPlane;
        private Texture2D loadedTexture;


        private void Start()
        {
            groundPlane.gameObject.SetActive(false);
        }

        public void SelectItem(ConfinedItemType itemType, int index)
        {
            switch (itemType)
            {
                case ConfinedItemType.Pod:
                    {
                        if (currentActive?.gameObject)
                        {
                            Destroy(currentActive.gameObject);
                        }

                        currentActive = Instantiate(pods[index], sceneItemHolder).GetComponent<ConfinedPod>();
                    }
                    break;
                case ConfinedItemType.Brackets:
                    {
                        currentActive.SetItems(itemType, brackets[index]);
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        currentActive.SetItems(itemType, winches[index]);
                    }
                    break;
                case ConfinedItemType.Retractable:
                    {
                        currentActive.SetItems(itemType, retractables[index]);
                    }
                    break;
                default:
                    break;
            }

            
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

