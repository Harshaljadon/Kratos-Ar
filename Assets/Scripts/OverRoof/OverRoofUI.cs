using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace AR2
{
    public class OverRoofUI : MonoBehaviour
    {
        public RoofController roofController;

        public TMP_Text lengthText;
        public TMP_Text widthText;

        float changeScale = 0.0f;

        public int changeVal = 5;
        int minValue = 50;
        int maxValue = 200;

        public int RoofLength { get; private set; } = 0;
        public int RoofWidth { get; private set; } = 0;

        private void Start()
        {
            changeScale = (float)changeVal / 10;
            RoofLength = minValue;
            RoofWidth = minValue; 
            lengthText.text = RoofLength.ToString();
            widthText.text = RoofWidth.ToString();
        }

        public void Increselength()
        {
            if (RoofLength < maxValue)
            {
                RoofLength += changeVal;
                lengthText.text = RoofLength.ToString();
                roofController.changeLength(changeScale);
            }
        }

        public void Decreselength()
        {
            if (RoofLength > minValue)
            {
                RoofLength -= changeVal;
                lengthText.text = RoofLength.ToString();

                roofController.changeLength(-changeScale);
            }
        }

        public void IncreseWidth()
        {
            if (RoofWidth < maxValue)
            {
                RoofWidth += changeVal;
                widthText.text = RoofWidth.ToString();

                roofController.changeWidth(changeScale);
            }
        }

        public void DecreseWidth()
        {
            if (RoofWidth > minValue)
            {
                RoofWidth -= changeVal;
                widthText.text = RoofWidth.ToString();

                roofController.changeWidth(-changeScale);
            }
        }
    }
}