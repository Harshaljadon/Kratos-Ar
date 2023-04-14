using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using DG.Tweening;

namespace AR2
{
    public class ConfinedUI : UiManagerBase
    {
        public enum UiState
        {
            Pod,
            Brackets,
            Winch,
            Retractable,
            Animation,
            ARDemo,
            NONE
        }

        public ConfinedSpaceManager confinedSpaceManager;
        public ARController arController;
        public UiAddElement scrollPanel;


        public RectTransform uiRootPanel;
        public GameObject menuPanel;
        public GameObject itemsPanel;
        public TMP_Text panelHeadingText;

        public Button SelectPodButton;
        public Button AddBracketButton;
        public Button AddWinchButton;
        public Button AddRetractableButton;
        public Button ARButton;

        
        public MobilemaxCamera cameraControls;
        
        public GameObject cameraShotPanel;
        public IndustryObject industryObject;
        public ScreenShotHandler screenShotHandler;

        public ArPlaceObject arPlaceObject;
        
        private bool isArON = false;

        private CanvasGroup canvasGroup;
        
        private Vector3 defaultScale = Vector3.one;
        private Vector3 arScale = Vector3.one * 0.25f;

        private void Awake()
        {
            canvasGroup = GetComponent<CanvasGroup>();
            if(InfoText != null)
                InfoText.SetActive(false);

            defaultScale = industryObject.transform.root.localScale;
        }

        private void Start()
        {
            canvasGroup.alpha = 0;

            canvasGroup.DOFade(1, 0.5f);
            UpdateMenu(UiState.Pod);
            
            cameraShotPanel.SetActive(false);
            
            cameraControls.arMode = isArON;
        }

        public void OnSelectPod()
        {
            OnStateSelected(confinedSpaceManager.pods, ConfinedItemType.Pod);
        }

        public void OnAddBrackets()
        {
            OnStateSelected(confinedSpaceManager.brackets, ConfinedItemType.Brackets);
        }

        public void OnAddWinch()
        {
            OnStateSelected(confinedSpaceManager.winches, ConfinedItemType.Winch);
        }

        public void OnAddRetractable()
        {
            OnStateSelected(confinedSpaceManager.retractables, ConfinedItemType.Retractable);
        }

        public void OnARdemo()
        {
            isArON = !isArON;
            
            cameraControls.arMode = isArON;
            FindObjectOfType<TouchControls>().isArMode = isArON;
            
            SetArMode(isArON);
            
            if (isArON)
            {
                // use ar camera to take screenshot
                //uiState = UiState.cameraShot;
                
                industryObject.transform.root.localScale = arScale; 
                
                industryObject.HideAllObjects();
                cameraShotPanel.SetActive(true);

                // industryObject.OnArActive();
                UpdateMenu(UiState.ARDemo);
                // ARButton.image.color = Color.red;
                
                arPlaceObject.b_ArMode = true;
                
                arPlaceObject.OnArActivate();
            }
            else
            {
                industryObject.ShowObjects();
                
                industryObject.transform.root.localScale = defaultScale; 
                
                // ARPlaneMesh.gameObject.SetActive(false);
                
                cameraShotPanel.SetActive(false);
                // ARButton.image.color = Color.white;
                // industryObject.OnArDeactivate();
                UpdateMenu(UiState.Animation);
                
                arPlaceObject.b_ArMode = false;
                arPlaceObject.OnArDeActivate();
            }

            //arPanel.SetActive(true);
            //SetArMode(true);
        }

        public void OnArBack()
        {
            arController.SetArMode(false);
        }

        private void SetArMode(bool newMode)
        {
            arController.SetArMode(newMode);
        }


        public void TakeARShot()
        {
            //arPanel.gameObject.SetActive(false);
            // ARPlaneMesh.gameObject.SetActive(false);
            StartCoroutine(SetArBackground());
            
            Invoke(nameof(EnableUIafterShot), 0.05f);
            HideUI(false);
            
            // confinedSpaceManager.groundPlane.gameObject.SetActive(false);

        }

        private IEnumerator SetArBackground()
        {
            yield return new WaitForEndOfFrame();
            // industryObject.HideAllObjects();
            SaveScreenShot();

            // var texture = ScreenCapture.CaptureScreenshotAsTexture();
            //
            //  Camera cam = Camera.main;
            //  float pos = (cam.nearClipPlane + 300f);
            //
            //  ARPlaneMesh.transform.position = cam.transform.position + cam.transform.forward * pos;
            //  //ARPlaneMesh.transform.LookAt(cam.transform);
            //  float h = (Mathf.Tan(cam.fieldOfView * Mathf.Deg2Rad * 0.5f) * pos * 2f) * cam.aspect / 10.0f;
            //  float w = h * Screen.height / Screen.width;
            //
            //  // plane is rotated thats why x(width) and z(height) are used
            //  ARPlaneMesh.transform.localScale = new Vector3(h * 1.5f, 1, w * 1.5f);
            //
            // ARPlaneMesh.material.mainTexture = texture;
            
            //// in confined scenario we only need ground plane, skipping ar plane
            //// confinedSpaceManager.groundPlane.material.mainTexture = texture;
        }


        void EnableUIafterShot()
        {
            // cameraShotPanel.SetActive(false);

            //ARPlaneMesh.gameObject.SetActive(true);

            // // show everything
            // industryObject.ShowObjects();
            // // then hide all unnecessary object
            // industryObject.HideObjects();

            ShowUI();

            // confinedSpaceManager.groundPlane.gameObject.SetActive(false);
            
            // if (confinedSpaceManager.groundPlane.material.mainTexture)
            // {
            //     confinedSpaceManager.groundPlane.gameObject.SetActive(true);
            // }
        }

        public void SaveScreenShot()
        {
            HideUI(true);
            
            screenShotHandler.TakeScreenShotwithDelay(0f);
            Invoke(nameof(EnableUIafterShot), 0.025f);
            
        }

        private void OnStateSelected<T>(List<T> items, ConfinedItemType itemType)
        {
            itemsPanel.gameObject.SetActive(true);
            SetHeading(itemType);

            int elementCount = items.Count;

            var cellData = Enumerable.Range(0, elementCount)
                .Select(i => new ElementCellData
                {
                    icon = confinedSpaceManager.GetItemIcon(i, itemType),
                    Message = confinedSpaceManager.GetItemName(i, itemType),
                    buttonIndex = i, 
                    buttonType = itemType
                })
                .ToList();

            scrollPanel.UpdateData(cellData);
        }


        private void UpdateMenu(UiState uiState)
        {
            if (uiState == UiState.ARDemo)
            {
                menuPanel.SetActive(false);
            }
            else
            {
                menuPanel.SetActive(true);
            }
            
            switch (uiState)
            {
                case UiState.Pod:
                    {
                        SelectPodButton.interactable = true;
                        AddBracketButton.interactable = false;
                        AddWinchButton.interactable = false;
                        AddRetractableButton.interactable = false;
                        ARButton.interactable = false;
                    }
                    break;
                case UiState.Brackets:
                    {
                        SelectPodButton.interactable = true;
                        AddBracketButton.interactable = true;
                        AddWinchButton.interactable = false;
                        AddRetractableButton.interactable = false;
                        ARButton.interactable = true;
                    }
                    break;
                case UiState.Winch:
                    {
                        SelectPodButton.interactable = true;
                        AddBracketButton.interactable = false;
                        AddWinchButton.interactable = true;
                        AddRetractableButton.interactable = true;
                        ARButton.interactable = true;
                    }
                    break;
                case UiState.Retractable:
                    {
                        SelectPodButton.interactable = true;
                        AddBracketButton.interactable = false;
                        AddWinchButton.interactable = true;
                        AddRetractableButton.interactable = true;
                        ARButton.interactable = true;
                    }
                    break;
                case UiState.Animation:
                    {
                        SelectPodButton.interactable = true;
                        AddBracketButton.interactable = false;
                        AddWinchButton.interactable = true;
                        AddRetractableButton.interactable = true;
                        ARButton.interactable = true;
                    }
                    break;
                case UiState.ARDemo:
                {
                    menuPanel.SetActive(false);
                }
                    break;
                case UiState.NONE:
                    break;
                default:
                    break;
            }
        }



        private void SetHeading(ConfinedItemType itemType)
        {
            switch (itemType)
            {
                case ConfinedItemType.Pod:
                    {
                        panelHeadingText.text = "Select Anchor";
                    }
                    break;
                case ConfinedItemType.Brackets:
                    {
                        panelHeadingText.text = "Select Bracket";
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        panelHeadingText.text = "Select Winch";
                    }
                    break;
                case ConfinedItemType.Retractable:
                    {
                        panelHeadingText.text = "Select Three way SRL";
                    }
                    break;
                default:
                    break;
            }

        }


        internal void OnItemSelected(ConfinedItemType buttonType, int buttonIndex)
        {
            confinedSpaceManager.SelectItem(buttonType, buttonIndex);

            // based on item selected change UI for next
            switch (buttonType)
            {
                case ConfinedItemType.Pod:
                    {
                        UpdateMenu(UiState.Brackets);
                    }
                    break;
                case ConfinedItemType.Brackets:
                    {
                        UpdateMenu(UiState.Winch);
                    }
                    break;
                case ConfinedItemType.Winch:
                    {
                        UpdateMenu(UiState.Retractable);
                    }
                    break;
                case ConfinedItemType.Retractable:
                    {
                        UpdateMenu(UiState.Animation);
                    }
                    break;
                default:
                    break;
            }

            OnItemsBack();
        }


        public void OnItemsBack()
        {
            itemsPanel.SetActive(false);
            scrollPanel.Clear();
        }

        public void BackToMenu()
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        }

        public override void ShowUI()
        {
            uiRootPanel.gameObject.SetActive(true);
            if(InfoText != null)
                InfoText.SetActive(false);
            // gizmoHandler.EnableGizmos();
        }

        public override void HideUI(bool addInfoText)
        {
            base.HideUI(addInfoText);
            uiRootPanel.gameObject.SetActive(false);
            // gizmoHandler.DisableGizmos();
        }

        public void OpenImage()
        {
            confinedSpaceManager.LoadImageFromGallery();
        }
    }
}