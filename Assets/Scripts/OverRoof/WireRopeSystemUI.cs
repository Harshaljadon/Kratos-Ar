using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class WireRopeSystemUI : UiManagerBase
{
    #region size
    public virtual void SetCorners(int change)
    {

    }

    public virtual void IncSegmentLength(int SegNumber)
    {

    }

    public virtual void DecSegmentLength(int SegNumber)
    {

    }

    public virtual void AdjustRoofSize()
    {

    }
    #endregion

    #region tensioner
    public virtual void IncDecTensioner(int vale)
    {

    }

    public virtual void ChangeTensionerType(int vale)
    {

    }
    #endregion

    #region cabletTermination
    public virtual void ChangeCableTerminationPointA(int ValuePassedPointA)
    {

    }

    public virtual void ChangeCableTerminationPointB(int ValuePassedPointB)
    {

    }

    #endregion

    public virtual void IncreaseDecreadeShockAbsorber(int value)
    {

    }

    public virtual void ChangeShockAborberType(int vale)
    {

    }

    public virtual void NextBackAnchor(int vale)
    {
        switch (vale)
        {
            case 1:
                NextAnchor();
                break;
            case -1:
                PreviousAnchor();
                break;
        }
    }

    public virtual void IncreaseIntermidiate(int onSegment)
    {

    }

    public virtual void DecreaseIntermidiate(int onSegment)
    {

    }

    protected virtual void NextAnchor()
    {

    }

    protected virtual void PreviousAnchor()
    {

    }

    public virtual void ChangeIntermediateBasePlate(int vale)
    {

    }

    public virtual void NextBackVehicel(int id)
    {

    }

    public virtual void NextbackCarriageBody(int value)
    {

    }

}

public interface IChangeAnchortype
{
    void NextAnchor();

    void PreviousAnchor();
}