using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopViewPos : MonoBehaviour
{
    public Transform anchorPosA, anchorPosB, anchorCorner, anchorCornerB;
    public Vector3 midPosition;
    public float debugyAxis, offset, offset2;

    // Update is called once per frame
    void Update()
    {
        if (anchorCornerB.gameObject.activeInHierarchy)
        {
            // 2 corner
            var pos_1 = Vector3.Lerp(anchorPosA.position, anchorCorner.position, .5f);
            var pos_2 = Vector3.Lerp(anchorPosB.position, anchorCornerB.position, .5f);
            midPosition = Vector3.Lerp(pos_1, pos_2, .5f);

            offset = Vector3.Distance(anchorPosA.position, anchorCorner.position);
            offset2 = Vector3.Distance(anchorPosB.position, anchorCornerB.position);
            var maxval = Mathf.Max(offset, offset2);
            debugyAxis = maxval;
        }
        else
        {
            midPosition = Vector3.Lerp(anchorPosA.position, anchorPosB.position, .5f);
            if (anchorCorner.gameObject.activeInHierarchy)
            {
                offset = Vector3.Distance(anchorPosA.position, anchorCorner.position);
                offset2 = Vector3.Distance(anchorPosB.position, anchorCorner.position);
                var maxval = Mathf.Max(offset, offset2);
                debugyAxis = Vector3.Distance(anchorPosA.position, anchorPosB.position);
                var ratio = maxval / debugyAxis;

                debugyAxis *= ratio;
            }
            else
            {
                // no corner
                debugyAxis = Vector3.Distance(anchorPosA.position, anchorPosB.position);

            }
        }

        transform.position = new Vector3(midPosition.x, debugyAxis, midPosition.z);
    }
}
