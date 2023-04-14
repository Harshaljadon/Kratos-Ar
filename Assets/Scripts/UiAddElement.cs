using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AR2
{
    public class UiAddElement : MonoBehaviour
    {
        public RectTransform panelItem;
        public RectTransform contentPanel;

        public void UpdateData(List<ElementCellData> data)
        {
            for (int i = 0; i < data.Count; i++)
            {
                RectTransform uiItem = Instantiate(panelItem, contentPanel);
                UIElement element = uiItem.GetComponent<UIElement>();
                element.SetElementValues(data[i]);
            }


            // update Scrollbar
            RectTransform rt = contentPanel.GetComponent<RectTransform>();
            int childsInVerticle = contentPanel.childCount / 3;

            rt.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, ((panelItem.rect.height + 10f) * (childsInVerticle + 1f)));// gap and spacing added
            rt.DOAnchorPosY(-(rt.rect.height / 2f), 0, false);//= new Vector2(rt.anchoredPosition3D.x, (-rt.anchoredPosition3D.y / 2f) ) ;

        }
        private void AddNewItem()
        {
            RectTransform t = Instantiate(panelItem, contentPanel);
        }

        public void Clear()
        {
            foreach (Transform child in contentPanel.transform)
            {
                Destroy(child.gameObject);
            }
        }

    }
}


