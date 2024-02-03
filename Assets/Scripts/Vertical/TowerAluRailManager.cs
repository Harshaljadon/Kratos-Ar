using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class TowerAluRailManager : MonoBehaviour
{
    public event Action<int> aluRailChangeResponseEvent;
    public event Action<bool> toggleAluRailontower;

    /// <summary>
    /// ui to change alu rail from event
    /// </summary>
    /// <param name="id">-1 for back and 1 for next</param>
    public void ChangeAluRailOnTower(int id)
    {
        aluRailChangeResponseEvent?.Invoke(id);
    }

    public void ToggleTowerAluRail(bool value)
    {
        toggleAluRailontower?.Invoke(value);
    }

}
