using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
//using UnityEngine.AddressableAssets;
//using UnityEngine.ResourceManagement.AsyncOperations;
namespace AR2
{
    public class UiAddElement : MonoBehaviour
    {
        //public AssetReference panelItemAddressableAsset;
        public GameObject panelItemAddressableAsset;
        RectTransform panelItem;
        public RectTransform contentPanel;
        public GameObject loadingStatus;


        public void UpdateData(List<ElementCellData> data)
        {
            //loadingStatus.SetActive(true);

            //panelItemAddressableAsset.LoadAssetAsync<GameObject>().Completed += (op) =>
            //{

            //    if (op.Status == AsyncOperationStatus.Succeeded)
            //    {
            //        //loadingStatus.SetActive(false);

            //        //panelItem = op.Result.GetComponent<RectTransform>();
            
            //        Addressables.Release(op);
            //    }
                
            //};

            panelItem = panelItemAddressableAsset.GetComponent<RectTransform>();
            var count = data.Count;
            for (int i = 0; i < count; i++)
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


