using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ModularBuildingsFramework.Demo;
using ModularBuildingsFramework;

public class VericleFixeLineBuildingGenerator : Demo
{
    protected override IEnumerator DoRebuild()
    {
        return base.DoRebuild();    
    }

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
}
