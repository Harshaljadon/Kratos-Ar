using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ModularBuildingsFramework.Demo;
public class BuildingManager : MonoBehaviour
{
    public Demo demo;
    public AluRailHolder[] aluRailHolders;
    public BuildingSize[] buildingSizes;
    public LifeLineType currentLifelinetype;

    //[SerializeField]
    public int currentCorner = 0;
    int size2;

    public GameObject[] anchorStartPoint;
    public GameObject[] anchorEndPoint;

    public virtual void ManageBuildingSize(int buildingIndex,float length,float depth)
    {
        buildingSizes[buildingIndex].Length +=  length;
        buildingSizes[buildingIndex].Depth +=   depth;
        demo.BuildingSize = buildingSizes;


        StartCoroutine(ActivateDeactvateAluRai());
    }


    public virtual IEnumerator  ActivateDeactvateAluRai()
    {
        yield return new WaitForSeconds(.1f);

        var size = aluRailHolders.Length;
        for (int i = 0; i < size; i++)
        {
            aluRailHolders[i].CHangesOccur = true;
            if (currentLifelinetype == LifeLineType.Alu_Rail)
            {
                //Debug.Log("calls");
                aluRailHolders[i].DeactivateAllElement();
                aluRailHolders[i].ActivateElement();
            }
        }

        UpdatePos();
    }


    protected virtual void UpdatePos()
    {
        var max = anchorStartPoint.Length;
        var size = aluRailHolders[0].AluRailElementHolder.Count;
        for (int i = 0; i < size; i++)
        {
            if (aluRailHolders[0].AluRailElementHolder[i].postPos == PostPos.startPoint)
            {
                var pos = aluRailHolders[0].AluRailElementHolder[i].posRef;
                for (int j = 0; j < max; j++)
                {
                    anchorStartPoint[j].transform.position = pos[j].position;
                }
            }
        }

        switch (currentCorner)
        {
            case 0:
                for (int i = 0; i < size; i++)
                {
                    if (aluRailHolders[0].AluRailElementHolder[i].postPos == PostPos.EndPoint)
                    {
                        var pos = aluRailHolders[0].AluRailElementHolder[i].posRef;
                        for (int j = 0; j < max; j++)
                        {
                            anchorEndPoint[j].transform.position = pos[j].position;
                        }
                    }
                }
                break;
            case 1:
                size2 = aluRailHolders[1].AluRailElementHolder.Count;

                for (int i = 0; i < size2; i++)
                {
                    if (aluRailHolders[1].AluRailElementHolder[i].postPos == PostPos.EndPoint && aluRailHolders[1].AluRailElementHolder[i].buildingFace == BuildingFace.face1)
                    {
                        var pos = aluRailHolders[1].AluRailElementHolder[i].posRef;
                        for (int j = 0; j < max; j++)
                        {
                            anchorEndPoint[j].transform.position = pos[j].position;
                        }
                    }
                }

                break;
            case 2:
                size2 = aluRailHolders[1].AluRailElementHolder.Count;

                for (int i = 0; i < size2; i++)
                {
                    if (aluRailHolders[1].AluRailElementHolder[i].postPos == PostPos.EndPoint && aluRailHolders[1].AluRailElementHolder[i].buildingFace == BuildingFace.face2)
                    {
                        //Debug.Log("call");

                        var pos = aluRailHolders[1].AluRailElementHolder[i].posRef;
                        for (int j = 0; j < max; j++)
                        {
                            anchorEndPoint[j].transform.position = pos[j].position;
                        }
                    }
                }
                break;

        }
    }

    public virtual void ExecuteAluRailCHanges(int corner,InstallPosition installPosition,LifeLineType lifeLineType)
    {
        currentCorner = corner;
        var size = aluRailHolders.Length;
        currentLifelinetype = lifeLineType;
        for (int i = 0; i < size; i++)
        {
        aluRailHolders[i].currentCorner = corner;
        aluRailHolders[i].currentPos = installPosition;

                aluRailHolders[i].groupMemberIndexIdActivation = (int)lifeLineType;
        aluRailHolders[i].CHangesOccur = true;
            //Debug.Log(lifeLineType);
            if (lifeLineType == LifeLineType.Alu_Rail)
            {

                aluRailHolders[i].DeactivateAllElement();
                aluRailHolders[i].ActivateElement();
            }
            else
            {
                //aluRailHolders[i].groupMemberIndexIdActivation = (int)lifeLineType;
                aluRailHolders[i].DeactivateAllElement();

            }
            UpdatePos();
            //aluRailHolders[i].ActivateElement();
        }


    }

    public void UpdateFixeLinegroupUpdateBuilding(int id)
    {
        demo.builderIndex = id;
    }



    public void OnOffBuilding(bool val)
    {
        aluRailHolders[1].gameObject.SetActive(val);
    }


}

[System.Serializable]
public struct BuildingSize
{
    public float Length;
    public float Depth;
    public float height;
}
