using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;


namespace AR2
{
    public class UIManager : MonoBehaviour
    {
        public CanvasGroup canvasGroup;
        
        public RectTransform overHeadButton;
        public RectTransform overRoofButton;
        public RectTransform confinedSpaceButton;
        public RectTransform verticalButton;

        public Material armMat;
        
        private string sceneName;
        float m_time = 0.3f;
        
        public void TapOnStart()
        {
            sceneName = "Choose";
            LoadScene();
        }

        private void Start()
        {
            if (armMat)
            {
                armMat.mainTexture = null;
            }
           
            canvasGroup.alpha = 0;

            canvasGroup.DOFade(1, 0.5f);
            
            if(SceneManager.GetActiveScene().name == "Choose")
            {
                overHeadButton.transform.localScale = Vector3.zero;
                overRoofButton.transform.localScale = Vector3.zero;
                confinedSpaceButton.transform.localScale = Vector3.zero;
                verticalButton.transform.localScale = Vector3.zero;

                overHeadButton.DOScale(Vector3.one, 0.5f);
                overRoofButton.DOScale(Vector3.one, 0.5f);
                confinedSpaceButton.DOScale(Vector3.one, 0.5f);
                verticalButton.DOScale(Vector3.one, 0.5f);
            }
            
        }
        
        public void OnOverHead()
        {
            AnimateAndLoad(overHeadButton);
            sceneName = "Over-Head";
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        public void OnOverRoof()
        {
            //SceneManager.LoadScene("over-the-roof");
            
            AnimateAndLoad(overRoofButton);
            sceneName = "over-the-roof";
            // Invoke(nameof(LoadScene), m_time * 2);
            
        }

        public void OnConfinedSpace()
        {
            AnimateAndLoad(confinedSpaceButton);
            sceneName = "ConfinedSpace";
            // Invoke(nameof(LoadScene), m_time * 2);
            
        }

        public void OnVertical()
        {
            AnimateAndLoad(verticalButton);
            sceneName = "Vertical";
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                SceneManager.LoadScene(0);
            }
        }


        private void LoadScene()
        {
            SceneManager.LoadSceneAsync(sceneName).completed += delegate(AsyncOperation operation) { };
        }
        
        
        
        // Use this for initialization
        void AnimateAndLoad(RectTransform itemToAnimate)
        {
            // Disable Button
            itemToAnimate.GetComponent<Button>().enabled = false;
            
            var targetRect = itemToAnimate.parent.GetComponent<RectTransform>().rect;

            Int32 childCount = itemToAnimate.childCount;
            
            itemToAnimate.transform.SetSiblingIndex(childCount + 1);


            Vector3 targetPosition = Vector3.zero;
            Vector2 targetSize = new Vector2(targetRect.width, targetRect.height);
            
            ScaleAndFill(itemToAnimate, targetPosition, targetSize, m_time);
            
            // itemToAnimate.localPosition = new Vector3(0, 0, 0);
            // itemToAnimate.sizeDelta = new Vector2(itemToAnimate.parent.GetComponent<RectTransform>().rect.width, itemToAnimate.parent.GetComponent<RectTransform>().rect.height);


            // PingPong(itemToAnimate, Vector3.one, (Vector3.one * 1.025f));
        }


        private void ScaleAndFill(RectTransform rectTransform, Vector3 targetPosition, Vector2 targetSize, float time)
        {
            rectTransform.DOSizeDelta(targetSize, time);
            rectTransform.DOAnchorPos(targetPosition, time).OnComplete(LoadScene);
            float value = rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier;

            DOTween.To(() => rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier, x =>
            {
                rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier = x;
            }, 10, time);



            rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier = value;
        }
        

        private void PingPong(Transform transform, Vector3 from, Vector3 to)
        {
            transform.DOScale(to, m_time).OnComplete(() => PingPong(transform,to, from));
        }
        
    }
}