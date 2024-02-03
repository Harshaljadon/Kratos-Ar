using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerticleBuildingManager : BuildingManager
{
    public AluRailWireRopeGroupManager[] aluRailWireRopeGroupManager;

    public override void ManageBuildingSize(int buildingIndex, float height, float depth)
    {
        //base.ManageBuildingSize(buildingIndex, length, depth);
        buildingSizes[buildingIndex].height += height;
        //buildingSizes[buildingIndex].Depth += depth;
        demo.BuildingSize = buildingSizes;


        StartCoroutine(ActivateDeactvateAluRai());
    }

    public override IEnumerator ActivateDeactvateAluRai()
    {
        //return base.ActivateDeactvateAluRai();

            aluRailHolders[0].CHangesOccur = true;
        //yield return new WaitForSeconds(.1f);

        while (aluRailHolders[0].CHangesOccur)
        {
            yield return null;
        }

        var size = aluRailHolders.Length;
        for (int i = 0; i < size; i++)
        {
            if (currentLifelinetype == LifeLineType.Alu_Rail)
            {
                //Debug.Log("calls");
                aluRailHolders[i].DeactivateAllElement();
                aluRailHolders[i].ActivateElement();
            }
        }

        yield return new WaitForSeconds(.1f);
        UpdatePos();
    }

    public override void ExecuteAluRailCHanges(int corner, InstallPosition installPosition, LifeLineType lifeLineType)
    {
        //base.ExecuteAluRailCHanges(corner, installPosition, lifeLineType);
        currentCorner = corner;
        //var size = aluRailHolders.Length;
        var size = aluRailWireRopeGroupManager.Length;
        currentLifelinetype = lifeLineType;
        for (int i = 0; i < size; i++)
        {
            //aluRailHolders[i].currentCorner = corner;
            aluRailWireRopeGroupManager[i].currentCorner = corner;
            //aluRailHolders[i].currentPos = installPosition;
            aluRailWireRopeGroupManager[i].currentPos = installPosition;

            //aluRailHolders[i].groupMemberIndexIdActivation = (int)lifeLineType;
            aluRailWireRopeGroupManager[i].groupMemberIndexIdActivation = (int)lifeLineType;
            //aluRailHolders[i].CHangesOccur = true;
        aluRailWireRopeGroupManager[0].CHangesOccur = true;
            //Debug.Log(lifeLineType);
            StartCoroutine(EnableDiableLifeLineSyatem(i,lifeLineType));

            //aluRailHolders[i].ActivateElement();
        }
    }

    IEnumerator EnableDiableLifeLineSyatem(int i, LifeLineType lifeLineType)
    {
        yield return new WaitForSeconds(.1f);

        //while (aluRailHolders[0].CHangesOccur)
        //{
        //    yield return null;
        //}


        if (lifeLineType == LifeLineType.Alu_Rail)
        {
            //Debug.Log(lifeLineType);
            //aluRailHolders[i].DeactivateAllElement();
            aluRailWireRopeGroupManager[i].DeactivateAllElement();
            aluRailWireRopeGroupManager[i].ActivateElement();
            aluRailWireRopeGroupManager[i].UpdateSubGroupElementActivationDeactivation();
            //aluRailHolders[i].ActivateElement();
        }
        if (lifeLineType == LifeLineType.Wire_Rope)
        {
            //Debug.Log(lifeLineType);
            aluRailWireRopeGroupManager[i].DeactivateAllElement();
            aluRailWireRopeGroupManager[i].ActivateElement();

        }
        yield return new WaitForSeconds(.1f);
        UpdatePos();
    }

    protected override void UpdatePos()
    {
        //base.UpdatePos();
        var max = anchorStartPoint.Length;
        var size = aluRailWireRopeGroupManager[0].aluRailWireRopeElementHolder.Count;
        for (int i = 0; i < size; i++)
        {
            if (aluRailWireRopeGroupManager[0].aluRailWireRopeElementHolder[i].postPos == PostPos.startPoint)
            {
                var pos = aluRailWireRopeGroupManager[0].aluRailWireRopeElementHolder[i].posRef;
                for (int j = 0; j < max; j++)
                {
                    anchorStartPoint[j].transform.position = pos[j].position;
                }
            }
        }

        switch (0)
        {
            case 0:
                for (int i = 0; i < size; i++)
                {
                    if (aluRailWireRopeGroupManager[0].aluRailWireRopeElementHolder[i].postPos == PostPos.EndPoint)
                    {
                        var pos = aluRailWireRopeGroupManager[0].aluRailWireRopeElementHolder[i].posRef;
                        for (int j = 0; j < max; j++)
                        {
                            anchorEndPoint[j].transform.position = pos[j].position;
                        }
                    }
                }
                break;
        }
    }



}
