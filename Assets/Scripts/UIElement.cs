using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using System;

namespace AR2
{
    [Serializable]
    public class AssetReferenceTMP_FontAsset : AssetReferenceT<TMP_FontAsset>
    {
        public AssetReferenceTMP_FontAsset(string guid) : base(guid)
        {
        }
    }
    public class UIElement : MonoBehaviour
    {


        public AssetReferenceTMP_FontAsset materialReference;


        public TMP_Text nameTxt;
        public TMP_Text downloading;
        public Image image;
        public int buttonIndex;
        public ConfinedItemType buttonType;

        [SerializeField]
        Button button = null;

        private ConfinedUI uiManager;
        ConfinedSpaceManager cSM;

        AsyncOperationHandle<TMP_FontAsset> handleOp;

        private void OnEnable()
        {
            cSM = FindObjectOfType<ConfinedSpaceManager>();
            handleOp = materialReference.LoadAssetAsync<TMP_FontAsset>();
            handleOp.Completed += (op) =>
            {
                nameTxt.font = op.Result;
                downloading.font = op.Result;

            };
            //Txt.font.atlas.text = textureReference.LoadAssetAsync<Texture>().Result;
        }

        void Start()
        {
            button.onClick.AddListener(OnPressedCell);
            uiManager = transform.root.GetComponent<ConfinedUI>();
        }

        private void OnDisable()
        {

            Addressables.Release(handleOp);
        }
        private void Update()
        {
            switch (buttonType)
            {
                case ConfinedItemType.Pod:
                    var a = nameTxt.text;
                    //bool result;
                    if (cSM.namePodStatausDic[a] && !button.interactable)
                    {
                        downloading.gameObject.SetActive(false);
                        button.interactable = true;
                        var tempCol = image.color;
                        tempCol.a = 1f;
                        image.color = tempCol;
                    } 
                    break;
                case ConfinedItemType.Brackets:
                    if (cSM.BracketsIsReady && !button.interactable)
                    {
                        downloading.gameObject.SetActive(false);
                        button.interactable = true;
                        var tempCol = image.color;
                        tempCol.a = 1f;
                        image.color = tempCol;
                    }
                    break;
                case ConfinedItemType.Winch:
                    var b = nameTxt.text;
                    if (cSM.nameWinchStatausDic[b] && !button.interactable)
                    {
                        downloading.gameObject.SetActive(false);
                        button.interactable = true;
                        var tempCol = image.color;
                        tempCol.a = 1f;
                        image.color = tempCol;
                    }
                    break;
                case ConfinedItemType.Retractable:
                    if (cSM.RetractablesIsReady && !button.interactable)
                    {
                        downloading.gameObject.SetActive(false);
                        button.interactable = true;
                        var tempCol = image.color;
                        tempCol.a = 1f;
                        image.color = tempCol;
                    }
                    break;
                
            }
            if (cSM.podAssetRef[buttonIndex].IsValid())
            {

            }
        }
        void OnPressedCell()
        {
            uiManager.OnItemSelected(buttonType, buttonIndex, nameTxt.text);

            //switch (buttonType)
            //{
            //    case ConfinedSpaceManager.ItemTypes.Pod:
            //        {
            //            uiManager.OnItemSelected(buttonType, buttonIndex);
            //        }
            //        break;
            //    case ConfinedSpaceManager.ItemTypes.Brackets:
            //        {
            //            uiManager.OnItemSelected(buttonType, buttonIndex);
            //        }
            //        break;
            //    case ConfinedSpaceManager.ItemTypes.Winch:
            //        {
            //            uiManager.OnItemSelected(buttonType, buttonIndex);
            //        }
            //        break;
            //    case ConfinedSpaceManager.ItemTypes.Retractable:
            //        {
            //            uiManager.OnItemSelected(buttonType, buttonIndex);
            //        }
            //        break;
            //    default:
            //        break;
            //}


            //Context?.OnPressedCell(this);

            //switch (buttonType)
            //{
            //    case ButtonType.harnessMenuButton:
            //        {
            //            _uiManager.OnSelectHarnessButton();
            //        }
            //        break;
            //    case ButtonType.harnessVariation:
            //        {
            //            _uiManager.OnHarnessPressed(buttonIndex);
            //            //_uiManager.OnMeshVariationPressed(_elementType, Context.SelectedIndex);
            //        }
            //        break;
            //    case ButtonType.colorMenuButton:
            //        {
            //            _uiManager.OnColorButtonPressed(elementType);
            //        }
            //        break;
            //    case ButtonType.colorVariation:
            //        {
            //            _uiManager.OnColorVariationPressed(elementType, buttonIndex);
            //        }
            //        break;
            //    default:
            //        break;
            //}
        }


        public void SetElementValues(ElementCellData data)
        {
            image.sprite = data.icon;
            nameTxt.text = data.Message;
            buttonIndex = data.buttonIndex;
            buttonType = data.buttonType;
        }
    }
}
