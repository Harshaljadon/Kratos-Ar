using AR2;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class RoofColorSelector : MonoBehaviour
{
    public MeshRenderer roofMesh;
    public Material material;
    public ColorPicker colorPicker;
    //public RoofTypeHolder[] roofTypeHolder;

    private void Start()
    {
        colorPicker.onColorChanged += OnColorChanged;
        //roofTypeHolder = FindObjectsByType<RoofTypeHolder>(FindObjectsSortMode.None);
        string savedColorStr;

        if (!PlayerPrefs.HasKey("RoofColor")) {
            PlayerPrefs.SetString("RoofColor", ColorUtility.ToHtmlStringRGBA(Color.cyan));
            savedColorStr = ColorUtility.ToHtmlStringRGBA(Color.cyan);
        }
        else {
            savedColorStr = PlayerPrefs.GetString("RoofColor");
        }
        //var oldColor = GetColorFromString(savedColorStr);
        ////roofMesh.material.color  = GetColorFromString(savedColorStr);
        //var max = roofTypeHolder.Length;
        //var max1 = roofTypeHolder[0].roofTypeCollection.Count;
        //for (int i = 0; i < max; i++)
        //{
        //    for (int j = 0; j < max1; j++)
        //    {
        //        var rendererRef = roofTypeHolder[i].roofTypeCollection[j].GetComponentsInChildren<MeshRenderer>();
        //        var max2 = rendererRef.Length;
        //        for (int k = 0; k < max2; k++)
        //        {
        //            var max3 = rendererRef[k].materials.Length;
        //            for (int l = 0; l < max3; l++)
        //            {
        //                rendererRef[k].materials[l].color = oldColor;
        //            }
        //        }
        //    }
        //}
        material.color = GetColorFromString(savedColorStr);
    }

    Color GetColorFromString(string colorStr)
    {
        ColorUtility.TryParseHtmlString("#" + colorStr, out var color);
        return color;
    }
    
    
    public void OnColorChanged(Color c)
    {
        material.color = c;
        //var max = roofTypeHolder.Length;
        //var max1 = roofTypeHolder[0].roofTypeCollection.Count;
        //for (int i = 0; i < max; i++)
        //{
        //    for (int j = 0; j < max1; j++)
        //    {
        //        var rendererRef = roofTypeHolder[i].roofTypeCollection[j].GetComponentsInChildren<MeshRenderer>();
        //        var max2 = rendererRef.Length;
        //        for (int k = 0; k < max2; k++)
        //        {
        //            var max3 = rendererRef[k].materials.Length;
        //            for (int l = 0; l < max3; l++)
        //            {
        //                rendererRef[k].materials[l].color = c;
        //            }
        //        }
        //    }
        //}
        //roofMesh.material.color  = c;
        PlayerPrefs.SetString("RoofColor", ColorUtility.ToHtmlStringRGBA(c));
    }

    private void OnDestroy()
    {
        if (colorPicker != null)
            colorPicker.onColorChanged -= OnColorChanged;
    }
}