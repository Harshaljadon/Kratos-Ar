
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class RoofColorSelector : MonoBehaviour
{
    public MeshRenderer roofMesh;

    public ColorPicker colorPicker;

    private void Start()
    {
        colorPicker.onColorChanged += OnColorChanged;

        string savedColorStr;

        if (!PlayerPrefs.HasKey("RoofColor")) {
            PlayerPrefs.SetString("RoofColor", ColorUtility.ToHtmlStringRGBA(Color.cyan));
            savedColorStr = ColorUtility.ToHtmlStringRGBA(Color.cyan);
        }
        else {
            savedColorStr = PlayerPrefs.GetString("RoofColor");
        }
        
        roofMesh.material.color  = GetColorFromString(savedColorStr);
    }

    Color GetColorFromString(string colorStr)
    {
        ColorUtility.TryParseHtmlString("#" + colorStr, out var color);
        return color;
    }
    
    
    public void OnColorChanged(Color c)
    {
        roofMesh.material.color  = c;
        PlayerPrefs.SetString("RoofColor", ColorUtility.ToHtmlStringRGBA(c));
    }

    private void OnDestroy()
    {
        if (colorPicker != null)
            colorPicker.onColorChanged -= OnColorChanged;
    }
}