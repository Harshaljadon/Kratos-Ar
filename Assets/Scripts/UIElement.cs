using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AR2
{
    public class UIElement : MonoBehaviour
    {
        public TMP_Text Txt;
        public Image image;
        public int buttonIndex;
        public ConfinedItemType buttonType;

        [SerializeField]
        Button button = null;

        private ConfinedUI uiManager;

        void Start()
        {
            button.onClick.AddListener(OnPressedCell);
            uiManager = transform.root.GetComponent<ConfinedUI>();
        }


        void OnPressedCell()
        {
            uiManager.OnItemSelected(buttonType, buttonIndex);

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
            Txt.text = data.Message;
            buttonIndex = data.buttonIndex;
            buttonType = data.buttonType;
        }
    }
}
