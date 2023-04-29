using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.UI.Extensions.Examples;

public class UiManager : MonoBehaviour
{
    public HarnessManager harnessManager;
    public HarnessDragRotator dragRotator;
    public AudioSource audioPlayer;
    
    public Button buttonPrefab;

    public RectTransform splashPanel;
    public RectTransform harnessChoosePanel;
    public RectTransform menuPanel;
    public RectTransform arPanel;
    public RectTransform viewPanel;
    public RectTransform settingsPanel;

    [SerializeField]
    RectTransform closeButton;
    public Sprite elementSprite;
    
    private bool isSplashClicked = false;
    bool canVibrate = true;
    private bool canPlaySound = true, isArON = false;
    
    [SerializeField] private UnityEngine.UI.Extensions.Examples.ElementScrollView elementsScrollView;
    [SerializeField] private UnityEngine.UI.Extensions.Examples.ElementScrollView variationsScrollView;
    [SerializeField] private UnityEngine.UI.Extensions.Examples.ElementScrollView colorsScrollView;

    private void Awake()
    {
        arPanel.gameObject.SetActive(false);
        menuPanel.gameObject.SetActive(false);
        closeButton.gameObject.SetActive(false);
        menuPanel.anchoredPosition = new Vector2(0, -110f);
        closeButton.anchoredPosition = new Vector2(0, 219);
        
        viewPanel.gameObject.SetActive(false);
        settingsPanel.gameObject.SetActive(false);
    }

    void PlayStartAnim()
    {
        menuPanel.gameObject.SetActive(true);
        closeButton.gameObject.SetActive(true);
        menuPanel.DOAnchorPos(new Vector2(0f, 110), 0.5f, true);
        closeButton.DOAnchorPos(new Vector2(0f, 0), 0.5f, true);
    }

    public void HideSplash()
    {
        if (!isSplashClicked)
        {
            isSplashClicked = true;
            splashPanel.GetComponent<Image>().DOFade(0, 1f);
            splashPanel.GetChild(0).GetChild(0).GetComponent<Image>().DOFade(0, 1f);
         
            menuPanel.gameObject.SetActive(true);
            dragRotator.gameObject.SetActive(false);
            Invoke(nameof(DeactiveateSplash), 1.01f);
            Invoke(nameof(PlayStartAnim), 1.05f);
        }
    }

    void DeactiveateSplash()
    {
        splashPanel.gameObject.SetActive(false);
    }
    
    public void OnVibrate()
    {
        if (canVibrate)
        {
            Handheld.Vibrate();
        }

        if (canPlaySound)
        {
            audioPlayer.Play();
        }
    }

    public void OnChooseHarness(int harnessType)
    {
        // harnessManager.ChooseHarness(harnessType);
        // harnessChoosePanel.gameObject.SetActive(false);
        // menuPanel.gameObject.SetActive(true);
        // dragRotator.gameObject.SetActive(true);
        // dragRotator.SetDragItem(harnessManager.CurrentHarness.gameObject);
    }
    

    /// <summary>
    /// harness button in main menu
    /// </summary>
    public void OnSelectHarnessButton()
    {
        elementsScrollView.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
        
        elementsScrollView.gameObject.SetActive(true);
        variationsScrollView.gameObject.SetActive(false);
        colorsScrollView.gameObject.SetActive(false);

        RectTransform elementRect = elementsScrollView.GetComponent<RectTransform>();
        
        elementRect.anchoredPosition = Vector2.zero;
        elementRect.DOAnchorPos(new Vector2(0f, 160f), 0.5f, true);
        elementRect.localScale = new Vector3(1,0,0);
        elementRect.DOScale(Vector3.one, 0.5f);
        
        // int elementCount = harnessManager.CurrentHarness.GetAvailableElementCount();
        int elementCount = harnessManager.GetHarnessCount();
        
        // var cellData = Enumerable.Range(0, elementCount)
        //     .Select(i => new UnityEngine.UI.Extensions.Examples.ElementCellDto {elementType = harnessManager.CurrentHarness.GetElementType(i),
        //                                                                             icon = elementSprite,
        //                                                                             Message = harnessManager.CurrentHarness.GetElementName(i), 
        //                                                                             buttonType = ButtonType.element})
        //     .ToList();
        
        var cellData = Enumerable.Range(0, elementCount)
            .Select(i => new UnityEngine.UI.Extensions.Examples.ElementCellDto {elementType = Element.ElementType.None,
                icon = elementSprite,
                Message = harnessManager.GetHarnessName(i), 
                buttonType = ButtonType.harnessVariation})
            .ToList();

        
        elementsScrollView.UpdateData(cellData);
    }
    
    public void OnSelectColor() // main menu button
    {
        if(harnessManager.CurrentHarness == null)
            return;
        
        elementsScrollView.gameObject.SetActive(true);
        variationsScrollView.gameObject.SetActive(false);
        colorsScrollView.gameObject.SetActive(false);
        
        
        int elementCount = harnessManager.CurrentHarness.GetAvailableElementCount();
        
        var cellData = Enumerable.Range(0, elementCount)
            .Select(i => new UnityEngine.UI.Extensions.Examples.ElementCellDto {elementType = harnessManager.CurrentHarness.GetElementType(i),
                icon = elementSprite,
                Message = harnessManager.CurrentHarness.GetElementName(i), 
                buttonType = ButtonType.colorMenuButton})
            .ToList();

        elementsScrollView.UpdateData(cellData);
    }

    // public void OnHarnessButtonPressed()
    // {
    //     variationsScrollView.gameObject.SetActive(true);
    //     colorsScrollView.gameObject.SetActive(false);
    //
    //     int variationCount = harnessManager.GetHarnessCount();
    //
    //     var cellData = Enumerable.Range(0, variationCount)
    //         .Select(i => new UnityEngine.UI.Extensions.Examples.ElementCellDto {elementType = elementType,
    //             icon = harnessManager.CurrentHarness.GetElementVariationSprite(elementType,i), 
    //             buttonType = ButtonType.harnessVariation})
    //         .ToList();
    //     
    //     variationsScrollView.UpdateData(cellData);
    // }

    /// <summary>
    /// choose element, whose available colors need to show 
    /// </summary>
    /// <param name="elementType"></param>
    public void OnColorButtonPressed(Element.ElementType elementType) // 
    {
        variationsScrollView.gameObject.SetActive(false);
        colorsScrollView.gameObject.SetActive(true);

        int variationCount = harnessManager.GetColorCountForElement(elementType);

        var cellData = Enumerable.Range(0, variationCount)
            .Select(i => new UnityEngine.UI.Extensions.Examples.ElementCellDto {elementType = elementType,
                icon = harnessManager.GetSpriteForColor(elementType, i), 
                buttonType = ButtonType.colorVariation})
            .ToList();
        
        colorsScrollView.UpdateData(cellData);
        
        OnVibrate();
    }
    
 

    public void OnHarnessPressed(int index)
    {
        harnessManager.ChooseHarness(index);

        // // Hide panel with animation
        // RectTransform elementRect = elementsScrollView.GetComponent<RectTransform>();
        // elementRect.DOAnchorPos(new Vector2(0f, 0), 0.3f, true);
        // elementRect.DOScale(new Vector3(1,0,0), 0.3f);
        
        dragRotator.canRotate = true;
        dragRotator.gameObject.SetActive(true);
        dragRotator.SetDragItem(harnessManager.CurrentHarness.gameObject);
        OnVibrate();
    }
    
    
    public void OnMeshVariationPressed(Element.ElementType elementType, int index)
    {
        harnessManager.CurrentHarness.SetElementVariation(elementType, index);
    }
    
    public void OnColorVariationPressed(Element.ElementType elementType, int index)
    {
        harnessManager.SetColorVariation(elementType, index);
        OnVibrate();
    }
    

    public void OnView()
    {
        viewPanel.anchoredPosition = new Vector2(0f, -2600f);
        viewPanel.gameObject.SetActive(true);
        viewPanel.DOAnchorPos(new Vector2(0f, 0), 0.5f, true);
    }

    public void HideView()
    {
        viewPanel.DOAnchorPos(new Vector2(0f, -2600f), 0.2f, true);
    }

    public void OnAR()
    {
        isArON = true;
        menuPanel.gameObject.SetActive(false);
        closeButton.gameObject.SetActive(false);
        harnessChoosePanel.gameObject.SetActive(false);
        
        elementsScrollView.gameObject.SetActive(false);
        variationsScrollView.gameObject.SetActive(false);
        colorsScrollView.gameObject.SetActive(false);
        
        arPanel.gameObject.SetActive(true);
    }

    public void CloseAR()
    {
        isArON = false;
        menuPanel.gameObject.SetActive(true);
        closeButton.gameObject.SetActive(true);
        arPanel.gameObject.SetActive(false);
    }

    public void BackToMenu()
    {
        if (!isArON)
        {

        UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        }
        else
        {
        UnityEngine.SceneManagement.SceneManager.LoadScene(6);

        }
    }
    public void OnSettings()
    {
        settingsPanel.anchoredPosition = new Vector2(0f, -2600f);
        settingsPanel.gameObject.SetActive(true);
        settingsPanel.DOAnchorPos(new Vector2(0f, 0), 0.5f, true);
    }

    public void HideSettings()
    {
        settingsPanel.DOAnchorPos(new Vector2(0f, -2600f), 0.2f, true);
    }

    public void QuitApp()
    {
        Application.Quit();
    }

    public void ChooseVibration(Toggle toggle)
    {
        if (toggle.isOn)
        {
            canVibrate = true;
        }
        else
        {
            canVibrate = false;
        }
    }
    
    public void ChooseSound(Toggle toggle)
    {
        if (toggle.isOn)
        {
            canPlaySound = true;
        }
        else
        {
            canPlaySound = false;
        }
    }
    
}
