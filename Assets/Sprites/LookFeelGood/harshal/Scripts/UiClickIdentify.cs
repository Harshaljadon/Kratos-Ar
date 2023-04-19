using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class UiClickIdentify : MonoBehaviour
{
    IdHolder idH;
    IdCompare idC;
    RaycastUtilities rU;
    [SerializeField]
    Vector2 myTouchPosOnScreen;
    [SerializeField]
    GameObject holder;
    // Start is called before the first frame update
    void Start()
    {
        rU = new RaycastUtilities();
        idH = GetComponent<IdHolder>();
        idC = new IdCompare(idH, holder);
    }
    [SerializeField]
    int idGet;
    Touch userTouch;
    [SerializeField]
    float timeTouchEnded;
    [SerializeField]
    float timeDiff = .04f;
    bool userClickRes, userMovingFinger;
    [SerializeField]
    GameObject anchorTextUi;
    [SerializeField]
    GameObject bracketTextUi;
    // Update is called once per frame
    void Update()
    {
        #region userTouchResponse
        if (Input.touchCount > 0)
        {
            userTouch = Input.GetTouch(0);
            if (userTouch.phase == TouchPhase.Began)
            {
                timeTouchEnded = Time.time;
                userMovingFinger = false;
            }
            if (userTouch.phase == TouchPhase.Moved)
            {
                userMovingFinger = true;
            }

            if (userTouch.phase == TouchPhase.Ended && userMovingFinger == false)
            {
                if (Time.time - timeTouchEnded > timeDiff )
                {
                myTouchPosOnScreen = new Vector2(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y);
                    //Debug.Log("click");
                    userMovingFinger = false;
                    userClickRes = true;
                    if (rU.PointerIsOverUI(myTouchPosOnScreen) && userClickRes)
                    {
                        userClickRes = false;
                        idGet = rU.firstHitObj.GetInstanceID();
                        if (idC.IdComparation(idGet))
                        {
                            byte condition = idC.caseMatch;
                            switch (condition)
                            {
                                case 0:
                                    anchorTextUi.SetActive(true);
                                    bracketTextUi.SetActive(false);
                                break;
                                case 1:
                                    anchorTextUi.SetActive(false);
                                    bracketTextUi.SetActive(true);
                                break;

                            }
                        }
                    }
                }
            }
        }
        #endregion


    }
}




#region raycastUti
/// <summary>
/// hover over ui to get game object 
/// </summary>
public class RaycastUtilities
{
    public  GameObject firstHitObj;
    public  bool PointerIsOverUI(Vector2 screenPos)
    {
        firstHitObj = UIRaycast(ScreenPosToPointerData(screenPos));
        return firstHitObj != null && firstHitObj.layer == LayerMask.NameToLayer("UI");
    }

    public  GameObject UIRaycast(PointerEventData pointerData)
    {
        var results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, results);

        return results.Count < 1 ? null : results[0].gameObject;
    }

    PointerEventData ScreenPosToPointerData(Vector2 screenPos)
    {
        return new(EventSystem.current) { position = screenPos };
    }

    // or 
    //PointerEventData ScreenPosToPointerData(Vector2 screenPos)
    //=> new(EventSystem.current) { position = screenPos };
}
 #endregion