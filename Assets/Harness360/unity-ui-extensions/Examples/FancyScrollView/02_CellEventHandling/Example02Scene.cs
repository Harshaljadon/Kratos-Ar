﻿using System.Linq;
using UnityEngine;

namespace UnityEngine.UI.Extensions.Examples
{
    public class Example02Scene : MonoBehaviour
    {
        [SerializeField]
        Example02ScrollView scrollView = null;

        void Start()
        {
            var cellData = Enumerable.Range(0, 5)
                .Select(i => new Example02CellDto { Message = "Cell " + i })
                .ToList();

            scrollView.UpdateData(cellData);
        }
    }
}
