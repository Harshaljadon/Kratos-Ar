using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetTransformAsPerInstall : MonoBehaviour
{
    public OrientationAspersegment[] orientationAspersegment;
    public CeillingWallFloorSystemUI ceillingWallFloorSystemUI;
    public IntermediateStartEndPoint intermediateStartEndPoint;
    public float commonSize = .1f, segment2Wall_offsetX, segment2Celing_Floor_offsetX;
    public SegmentType mySegmentType;

    private void OnEnable()
    {
        ceillingWallFloorSystemUI = FindAnyObjectByType<CeillingWallFloorSystemUI>();
        intermediateStartEndPoint = GetComponent<IntermediateStartEndPoint>();



        if (ceillingWallFloorSystemUI != null )
        {
            switch (ceillingWallFloorSystemUI.InstallPosition)
            {
                case InstallPosition.floor:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.floor_rotation);

                        }
                    }
                    break;
                case InstallPosition.wall:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.wall_rotation);

                        }
                    }
                    break;
                case InstallPosition.ceiling:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.ceilling_rotation);

                        }
                    }

                    break;
                case InstallPosition.none:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.rotation);

                        }
                    }
                    break;
            }

        }

        if (intermediateStartEndPoint.postRef != null)
        {
            float sizeImplement = 1f;
            switch (intermediateStartEndPoint.sizeId)
            {
                case 0:
                    sizeImplement = commonSize * .3f;
                    break;
                case 1:
                    sizeImplement = commonSize * .5f;
                    break;
                case 2:
                    sizeImplement = commonSize * .7f;
                    break;
                default:
                    break;
            }
            //intermediateStartEndPoint.postRef.transform.localScale = new Vector3(intermediateStartEndPoint.postRef.transform.localScale.x, intermediateStartEndPoint.postRef.transform.localScale.y, sizeImplement);
        }

        if (intermediateStartEndPoint.tensionerRef != null)
        {
            transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef.transform.position.y, transform.position.z);
        }
    }
    // Update is called once per frame
    void Update()
    {
        // which segement are on
        if (intermediateStartEndPoint != null)
        {
            mySegmentType = intermediateStartEndPoint.myegment;
        }
        // set orientation
        if (ceillingWallFloorSystemUI != null)
        {
            switch (ceillingWallFloorSystemUI.InstallPosition)
            {
                case InstallPosition.floor:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.floor_rotation);

                        }
                    }
                    break;
                case InstallPosition.wall:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.wall_rotation);

                        }
                    }
                    break;
                case InstallPosition.ceiling:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.ceilling_rotation);

                        }
                    }

                    break;
                case InstallPosition.none:
                    foreach (var item in orientationAspersegment)
                    {
                        if (item.segmentType == mySegmentType)
                        {
                            transform.rotation = Quaternion.Euler(item.rotation);

                        }
                    }
                    break;
            }

        }
        //set loacal scale as per post
        if (intermediateStartEndPoint.postRef != null)
        {
            float sizeImplement = 1f;
            switch (intermediateStartEndPoint.sizeId)
            {
                case 0:
                    sizeImplement =   .3f;
                    break;
                case 1:
                    sizeImplement =   .5f;
                    break;
                case 2:
                    sizeImplement =   .7f;
                    break;
                default:
                    break;
            }
            //intermediateStartEndPoint.postRef.transform.localScale = new Vector3(intermediateStartEndPoint.postRef.transform.localScale.x, intermediateStartEndPoint.postRef.transform.localScale.y, sizeImplement);
        }
        // set position 
        if (intermediateStartEndPoint.tensionerRef != null)
        {
            if (mySegmentType == SegmentType.seg2)
            {
                if (ceillingWallFloorSystemUI.InstallPosition == InstallPosition.wall)
                {
                    transform.position = new Vector3(intermediateStartEndPoint.segmentLine.startPos.position.x+ segment2Wall_offsetX, intermediateStartEndPoint.tensionerRef.transform.position.y, transform.position.z);

                }
                else
                {
                    transform.position = new Vector3(intermediateStartEndPoint.segmentLine.startPos.position.x+ segment2Celing_Floor_offsetX, intermediateStartEndPoint.tensionerRef.transform.position.y, transform.position.z);

                }

            }
            else
            {
                if (ceillingWallFloorSystemUI.InstallPosition == InstallPosition.wall)
                {
                    if (mySegmentType == SegmentType.seg1)
                    {
                        transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef.transform.position.y, intermediateStartEndPoint.tensionerRef.transform.position.z);
                    }
                    if (mySegmentType == SegmentType.seg3)
                    {
                        transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef2.transform.position.y, intermediateStartEndPoint.tensionerRef2.transform.position.z);

                    }
                    //transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.segMentStartPoint.z, intermediateStartEndPoint.segMentStartPoint.y);
                }
                else
                {
                transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef.transform.position.y, intermediateStartEndPoint.segMentStartPoint.z);

                }

            }
            //switch (ceillingWallFloorSystemUI.InstallPosition)
            //{
            //    case InstallPosition.floor:
            //        foreach (var item in orientationAspersegment)
            //        {
            //            if (item.segmentType == mySegmentType)
            //            {
            //                transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef.transform.position.y, transform.position.z)  ;

            //            }
            //        }
            //        break;
            //    case InstallPosition.wall:
            //        foreach (var item in orientationAspersegment)
            //        {
            //            if (item.segmentType == mySegmentType)
            //            {
            //                transform.position = new Vector3(transform.position.x, intermediateStartEndPoint.tensionerRef.transform.position.y, transform.position.z) ;

            //            }
            //        }
            //        break;
            //    case InstallPosition.ceiling:


            //        break;
            //}
        }
    }
}

[System.Serializable]
public class OrientationAspersegment
{
    public SegmentType segmentType;
    public Vector3 rotation, floor_rotation, wall_rotation, ceilling_rotation;
    public Vector3 positionOffset;
}
