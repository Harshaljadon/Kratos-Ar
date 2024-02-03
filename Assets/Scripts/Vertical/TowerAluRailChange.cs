using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerAluRailChange : MonoBehaviour
{
    [SerializeField] TowerAluRailManager towerAluRailManager;
    TowerAluRail towerAluRail;
    int currentIndex;
    private void Start()
    {
        towerAluRailManager = FindAnyObjectByType<TowerAluRailManager>();
        towerAluRail = GetComponent<TowerAluRail>();
        if (towerAluRailManager == null)
        {
            Debug.Log("null");
            return;
        }
        towerAluRailManager.aluRailChangeResponseEvent += TowerAluRailManager_aluRailChangeResponseEvent;
        towerAluRailManager.toggleAluRailontower += TowerAluRailManager_toggleAluRailontower1;
    }

    private void TowerAluRailManager_toggleAluRailontower1(bool obj)
    {
        towerAluRail.headTowerAlurail.SetActive(obj);
    }



    private void TowerAluRailManager_aluRailChangeResponseEvent(int obj)
    {
        CheckRef();
        //Debug.Log("call");

        NextBackValu nextBackValu = new NextBackValu(obj, towerAluRail.aluRail.Count, currentIndex);
        currentIndex = nextBackValu.GetIndex();

        NextBackValu nextBackValu2 = new NextBackValu(towerAluRail.aluRail);
        nextBackValu2.OffGameObjects();

        towerAluRail.aluRail[currentIndex].SetActive(true);
    }



    private void OnDestroy()
    {
        towerAluRailManager.aluRailChangeResponseEvent -= TowerAluRailManager_aluRailChangeResponseEvent;

    }

    void CheckRef()
    {
        if (towerAluRail == null)
        {
            Debug.Log("null");
            return;
        }
    }
}
