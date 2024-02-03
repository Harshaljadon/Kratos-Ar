using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ModularBuildingsFramework.Demo;
using ModularBuildingsFramework;

public class RoofBuildingManager : Demo
{
    [SerializeField] Vector3 offset;
    [SerializeField] Transform posRef;
    WaitForEndOfFrame waitForEndOfFrame;
    protected override BoxDraft CreateDraft()
    {
        //return base.CreateDraft();
        var result = BoxDraft.Create();
        result.Parse(Targets[builderIndex]);

        //result.length = draftLength;
        result.length = buildingSize[builderIndex].Length;
        result.height = buildingSize[builderIndex].height;
        //result.height = draftHeight;
        result.depth = buildingSize[builderIndex].Depth;
        //result.depth = draftDepth;

        return result;
    }



    protected override IEnumerator DoRebuild()
    {
        //yield return new WaitForSeconds(1f);
        //yield return new WaitForSeconds(1f);
        while (IsDraftDirty)
        {
            waitForEndOfFrame = new WaitForEndOfFrame();
            yield return waitForEndOfFrame;
            //yield return new WaitForEndOfFrame();

            var targetSiz = Targets.Length;
            for (int i = 0; i < targetSiz; i++)
            {
                //Debug.Log("enter");
                builderIndex = i;
                Utils.DeleteChilds(Targets[builderIndex]);
                UpdateTargetPosition();

                var draft = CreateDraft();
                var builder = GetBuilder();
                builder.Build(draft);

                if (isRunDecorators)
                    Utils.RunDecorators(Targets[builderIndex]);
            }
            yield return new WaitForEndOfFrame();

            builderIndex = 0;
            IsDraftDirty = false;
            //if (IsDraftDirty)
            //{

            //}
        }
    }


    private void UpdateTargetPosition()
    {
        //Targets[0].position = Vector3.zero - Targets[0].right * draftLength * 0.5f - Targets[0].forward * draftDepth * 0.5f + offset;
        Targets[0].position = Vector3.zero - Targets[0].right * buildingSize[0].Length * 0.5f - Targets[0].forward * buildingSize[0].Depth * 0.5f + offset;
        //if(posRef == null)
        //{
        //    return;
        //}    
        //Targets[0].position = posRef.position + offset;

    }
}
