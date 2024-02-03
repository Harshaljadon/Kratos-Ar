using System.Collections.Generic;
using UnityEngine;


public class SetClipPlanes : MonoBehaviour
{
    public Transform[] Planes; // out 6 empty gameobjects
    public Transform planeParent;
    public GameObject[] harnessPartRendererMaterial;
    public List<Material> harnessMaterial;
    public Vector3 centerPosHarness;
    Vector4 V;
    int materialSize;
    SelfRegester sR;
    public bool HarnessInstantiated;

    public Camera arCamera; // Reference to the AR camera

    HarnessRendererMaterialholder hRM;
    // Add any other variables you may need
    private void Start()
    {
        sR = FindObjectOfType<SelfRegester>();
        sR.trigger += AssignValue;
        arCamera = Camera.main; // Assign the AR camera reference

    }

    void AssignValue()
    {
        if (sR.HarnesPrefebinsticated != null)
        {
            HarnessInstantiated = true;
            hRM = sR.HarnesPrefebinsticated.GetComponent<HarnessRendererMaterialholder>();
            harnessPartRendererMaterial = hRM.harnessPartMaterial;
            centerPosHarness = hRM.centerPos.position;
            planeParent.position = centerPosHarness;
        }
        int size = harnessPartRendererMaterial.Length;
        for (int i = 0; i < size; i++)
        {
            int count = harnessPartRendererMaterial[i].GetComponent<Renderer>().materials.Length;
            for (int j = 0; j < count; j++)
            {
                harnessMaterial.Add(harnessPartRendererMaterial[i].GetComponent<Renderer>().materials[j]);

            }
        }
        //Harness = harness.GetComponent<SkinnedMeshRenderer>().materials;
        //mat = cylinder.GetComponent<Renderer>().material;
        //materialSize = Harness.Length;
        materialSize = harnessMaterial.Count;
    }

    public bool ToggleClick;
    void Update()
    {


        if (HarnessInstantiated )
        {
            if (arCamera != null && sR.HarnesPrefebinsticated != null)
            {
                // Make the game object look at the AR camera
                var a = sR.HarnesPrefebinsticated.GetComponent<HarnessRendererMaterialholder>().centerPos;
                planeParent.position = a.position;
                //sR.HarnesPrefebinsticated.transform.LookAt(arCamera.transform);
                //planeParent.LookAt(arCamera.transform);
                //planeParent.transform.SetParent(a.transform);
            }
            for (int i = 0; i < materialSize; i++)
            {
                //V = Planes[i].forward;
                //V.w = -Vector3.Dot(V, Planes[i].position);
                for (int j = 0; j < 6; j++)
                {
                    V = Planes[j].forward;
                    V.w = -Vector3.Dot(V, Planes[j].position);
                    harnessMaterial[i].SetVector("_Plane" + j, V);
                    //mat.SetVector("_Plane" + i, V);
                }
            }
        }
        if(ToggleClick)
        {
            for (int i = 0; i < materialSize; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                //V = Planes[j].forward;
                //V.w = -Vector3.Dot(V, Planes[j].position);
                harnessMaterial[i].SetVector("_Plane" + j, new Vector4(0,0,0,0));

                }
                //mat.SetVector("_Plane" + i, V);
            }
        }


        //for (int i = 0; i < 6; i++)
        //{
        //    Vector4 V = Planes[i].forward;
        //    V.w = -Vector3.Dot(V, Planes[i].position);
        //    mat.SetVector("_Plane" + i, V);
        //}
    }

    public void OnOffShaderEffect(bool value)
    {
        ToggleClick = !value;
        //Debug.Log(ToggleClick);
        HarnessInstantiated = !HarnessInstantiated;
    }
}
