using UnityEngine;
using System.Collections;

namespace TMPro.Examples
{
    public class CameraSwitcher : MonoBehaviour
    {
        // Reference to both camera controllers
        public CameraController cameraController;
        public MobilemaxCamera mobilemaxCamera;
        public Transform targetTransform;
        void Awake()
        {
            cameraController = FindFirstObjectByType<CameraController>();
            mobilemaxCamera = FindFirstObjectByType<MobilemaxCamera>();
#if UNITY_ANDROID || UNITY_IOS
            // Use MobilemaxCamera on Android and iOS
            //gameObject.AddComponent<MobilemaxCamera>();
            mobilemaxCamera.target = targetTransform;
            cameraController.enabled = false;
            mobilemaxCamera.enabled = true;
#else
            // Use CameraController on other platforms
            //gameObject.AddComponent<CameraController>();
            cameraController.CameraTarget = targetTransform;
            cameraController.enabled = true;
            mobilemaxCamera.enabled = false;
#endif
        }
    }
}
