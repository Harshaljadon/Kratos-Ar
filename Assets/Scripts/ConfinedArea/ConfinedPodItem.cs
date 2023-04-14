using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class ConfinedPodItem : MonoBehaviour
    {
        public bool canAnimate = false;
        public float speed = 1f;

        public Transform ropeStartPoint;
        public ConfinedItemType itemType = ConfinedItemType.Winch;
        public Transform winchHandle;

        private void Start()
        {
            ConfinedPod currentPod = FindObjectOfType<ConfinedPod>(); // transform.root.GetComponent<ConfinedPod>();

            if (currentPod)
            {
                currentPod.SetRopeStartPosition(itemType, ropeStartPoint.position);
                currentPod.SpawnRadhe();
            }                       
        }


        public void Update()
        {
            if (canAnimate && itemType == ConfinedItemType.Winch)
            {
                //radheAttachPoint.position = Vector3.Lerp(startPos.position, EndPos.position, Mathf.PingPong(Time.time / speed, 1));

                //winchHandle.rotation

                //Vector3 newRotaion = winchHandle.rotation.eulerAngles + new Vector3(0,0, (90f * Mathf.Lerp(0, 1, Mathf.PingPong(Time.time / speed, 1))) );

                //winchHandle.rotation = Quaternion.Euler(newRotaion);

                winchHandle.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, Mathf.Lerp(0, 360, Mathf.PingPong(Time.time / speed, 1)));

            }
        }

    }
}
