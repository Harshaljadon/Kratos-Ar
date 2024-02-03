using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class GameLoader : MonoBehaviour
{

    [SerializeField]
    WireRopeSystemUI wireRopeSystem;
    //[SerializeField] WireRopeSystem wireRopeSystem;
    [SerializeField]
    CeillingWallFloorSystemUI ceillingWallFloorSystemUI;
    //[SerializeField]
    //FollowWithOffset followWithOffset;
    public TextAsset jsonTextAsset; // Reference to the JSON text asset
    public GameData gameData;
    string jsonText, jsonText2;
    [SerializeField]
    FileSelector fileSelector;

    [SerializeField]
    string[] anchorName;
    [SerializeField]
    string[] tensionerName;
    [SerializeField]
    string[] shockAbsNames;
    [SerializeField]
    string[] cableTermination;
    [SerializeField]
    string[] lifeLineTypeName;
    [SerializeField]
    List<string> instalPosName;
    
    public int currentAnchorIndex, currentCornerNumber, anchorSizename,currecntS1Inter, currecntS2Inter, currecntS3Inter,currentS1Length, currentS2Length, currentS3Length;
    public int currenttensionerIndex, currentShockAb = 2,currentCTA,currentCTB, ctaCodeIndex, ctBCodeIndex, currentRooflength, currentRoofWeidth;

    bool wireRopeSystemUIRef, ceillingWallFloorSystemUIRef; //followWithOffsetRef

    private void Awake()
    {
        wireRopeSystem = FindFirstObjectByType<WireRopeSystemUI>();
        wireRopeSystemUIRef = wireRopeSystem != null ? true : false;
        //followWithOffsetRef = followWithOffset != null ? true : false;
        ceillingWallFloorSystemUIRef = ceillingWallFloorSystemUI != null ? true : false;
    }

    private void Start()
    {
        anchorSizename = anchorName.Length;
        //jsonText = jsonTextAsset.text;

        //currentRooflength =  currentRoofWeidth = 5;
        //gameData = JsonUtility.FromJson<GameData>(jsonText);

        //foreach (GameObjectData gameObjectData in gameData.gameObjects)
        //{
        //    GameObject prefab = Resources.Load<GameObject>(gameObjectData.name);
        //    Instantiate(prefab, gameObjectData.position, Quaternion.identity);
        //}

        fileSelector = FindFirstObjectByType<FileSelector>();
        if (fileSelector != null)
        {

        fileSelector.onFileSelected += ALuRailtestingJsonExecution;
        }

    }

    private void ALuRailtestingJsonExecution(string obj)
    {

        gameData = JsonUtility.FromJson<GameData>(obj);
        if (!ceillingWallFloorSystemUIRef)
        {
            return;
        }

        //Debug.Log(obj);
        SelectLifeLineType(gameData.gameObjects[0].LifeLineType);
        InstallPositioonExecution(gameData.gameObjects[0].Position);
        CornerAdjustment(gameData.gameObjects[0].Corner);
        #region segmentLength

        if (gameData.gameObjects[0].Segment1Length > 0)
        {
            AdjustSegmentLength(0, gameData.gameObjects[0].Segment1Length);

        }

        if (gameData.gameObjects[0].Segment2Length > 0)
        {

            AdjustSegmentLength(1, gameData.gameObjects[0].Segment2Length);

        }

        if (gameData.gameObjects[0].Segment3Length > 0)
        {

            AdjustSegmentLength(2, gameData.gameObjects[0].Segment3Length);
        }

        #endregion
        //throw new System.NotImplementedException();
    }

    void SelectLifeLineType(string lifeLineName)
    {
        int id = lifeLineName == lifeLineTypeName[0] ? 1:-1;
        ceillingWallFloorSystemUI.NextBackLifeLineType(id);// 1 for wire rop,-1 for alu rail
    }

    void InstallPositioonExecution(string posNameJson)
    {
        int index = instalPosName.IndexOf(posNameJson.ToUpper());
        for (int i = 0; i < index; i++)
        {
            ceillingWallFloorSystemUI.NextBackInstallation(1);
        }
    }

    //private void OnDisable()
    //{
    //    fileSelector.onFileSelected -= ALuRailtestingJsonExecution;

    //}

    public void ExecuteJsonTask(JsonApliTemplateRef_OverTheRoof _jsonText)
    {
        //jsonText2 = _jsonText;
        //Debug.Log(_jsonText);

        //gameData = JsonUtility.FromJson<GameData>(jsonText2);


        int anchorListNameSize = anchorName.Length;
        for (int i = 0; i < anchorListNameSize; i++)
        {
            if (_jsonText.AnchorProductCode == anchorName[i])
            {
                NextPreviusAnchorChangeCall(i);
                break;
            }
        }

        CornerAdjustment(_jsonText.Corner);



        if (_jsonText.ShockAbQty >= 0 && _jsonText.ShockAbQty <= 2)
        {
            AdjustShockAbsorber(_jsonText.ShockAbQty);

            var max = shockAbsNames.Length;
            for (int i = 0; i < max; i++)
            {
                if (_jsonText.ShockAbType == shockAbsNames[i])
                {
                    AdjustShockAbsorType(i);
                }
            }
        }

        #region segmentLength

        if (_jsonText.Segment1Length > 0)
        {
            AdjustSegmentLength(0, _jsonText.Segment1Length);
            //AdjustRoofSize(0, _jsonText.Segment1Length);

        }

        if (_jsonText.Segment2Length > 0)
        {

            AdjustSegmentLength(2, _jsonText.Segment2Length);
            //AdjustRoofSize(1, _jsonText.Segment2Length);

        }

        if (_jsonText.Segment3Length > 0)
        {

            AdjustSegmentLength(1, _jsonText.Segment3Length);
        }

        #endregion

        AdjustRoofSize();

        #region intermediate qty

        if (_jsonText.S1Intermediate >= 0)
        {
            AdjustIntermediates(0, _jsonText.S1Intermediate);
        }

        if (_jsonText.S2Intermediate >= 0)
        {
            AdjustIntermediates(1, _jsonText.S2Intermediate);
        }

        if (_jsonText.S3Intermediate >= 0)
        {
            AdjustIntermediates(2, _jsonText.S3Intermediate);

        }

        #endregion
        //if (followWithOffsetRef)
        //{

        //followWithOffset.SetTarget1PosToAnchor1Stpos();
        //}


        int tensionerListSize = tensionerName.Length;
        for (int t = 0; t < tensionerListSize; t++)
        {
            if (_jsonText.TensionerCode == tensionerName[t])
            {
                NextPreviousTensioner(t);
            }
        }

        if (currenttensionerIndex ==2)
        {
            //int  = 0, ctBCodeIndex = 0;
            int ctsize = cableTermination.Length;
            for (int i = 0; i < ctsize; i++)
            {
                if (_jsonText.CTA == cableTermination[i])
                {
                    ctaCodeIndex = i;
                    break;
                }
            }

            for (int k = 0; k < ctsize; k++)
            {
                if (_jsonText.CTB == cableTermination[k])
                {
                    ctBCodeIndex = k;
                    break;
                }
            }
            AdjusteCableTerminationPointAb(ctaCodeIndex, ctBCodeIndex);
        }


    }



    void AdjustRoofSize() //byte lengthWeidthId, int value
    {
        if (wireRopeSystemUIRef)
        {
            wireRopeSystem.AdjustRoofSize();
        }
        #region not required
        //value = (int)Mathf.Floor(value / 20);
        //Debug.Log(value);
        //switch (lengthWeidthId)
        //{
        //    case 0:
        //        if (currentRooflength < value)
        //        {
        //            var timeDiff = value - currentRooflength;
        //            for (int i = 0; i < timeDiff; i++)
        //            {
        //                overRoofSystemUI.IncreseRoofLength();
        //            }
        //        }
        //        else if(currentRooflength > value)
        //        {
        //            var timeDiff =  currentRooflength - value;
        //            for (int i = 0; i < timeDiff; i++)
        //            {
        //                overRoofSystemUI.DecreseRoofLength();
        //            }
        //        }
        //        break;
        //    case 1:
        //        if (currentRooflength < value)
        //        {
        //            var timeDiff = value - currentRoofWeidth;
        //            for (int i = 0; i < timeDiff; i++)
        //            {
        //                overRoofSystemUI.IncreseRoofWidth();
        //            }
        //        }
        //        else if (currentRooflength > value)
        //        {
        //            var timeDiff = currentRoofWeidth - value;
        //            for (int i = 0; i < timeDiff; i++)
        //            {
        //                overRoofSystemUI.DecreseRoofWidth();
        //            }
        //        }
        //        break;
        //    default:
        //        break;
        //}
        #endregion
    }

    void AdjustSegmentLength(byte segmentIndex, int totalLength)
    {
        switch (segmentIndex)
        {
            case 0:
                if (currentS1Length < totalLength)
                {
                    var timeDiff = totalLength - currentS1Length;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {
                        wireRopeSystem.IncSegmentLength(0);

                        }

                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.IncreseSegment(0);
                        }
                    }

       
                }
                else if(currentS1Length > totalLength)
                {
                    var timeDiff = currentS1Length - totalLength;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {
                        wireRopeSystem.DecSegmentLength(0);

                        }
                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.DecreaseSegment(0);
                        }
                    }
                }
                currentS1Length = totalLength;
                break;
            case 1:
                if (currentS2Length < totalLength)
                {
                    var timeDiff = totalLength - currentS2Length;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {
                        wireRopeSystem.IncSegmentLength(1);

                        }
                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.IncreseSegment(1);
                        }
                    }

                }
                else if (currentS2Length > totalLength)
                {
                    var timeDiff = currentS2Length - totalLength;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {

                        wireRopeSystem.DecSegmentLength(1);
                        }
                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.DecreaseSegment(1);
                        }
                    }
                }
                currentS2Length = totalLength;
                break;
            case 2:
                if (currentS3Length < totalLength)
                {
                    var timeDiff = totalLength - currentS3Length;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {

                        wireRopeSystem.IncSegmentLength(2);
                        }
                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.IncreseSegment(2);
                        }
                    }
                }
                else if (currentS3Length > totalLength)
                {
                    var timeDiff = currentS3Length - totalLength;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        if (wireRopeSystemUIRef)
                        {

                        wireRopeSystem.DecSegmentLength(2);
                        }

                        if (ceillingWallFloorSystemUIRef)
                        {
                            ceillingWallFloorSystemUI.DecreaseSegment(2);
                        }
                    }
                }
                currentS3Length = totalLength;
                break;

        }

 
    }

    void AdjustIntermediates(byte intermediateindex, int totalIntermediate)
    {
        switch (intermediateindex)
        {
            case 0:
                if (currecntS1Inter < totalIntermediate) 
                {
                    var timeDiff = totalIntermediate - currecntS1Inter;
                    for (int i = 0; i < timeDiff; i++)
                    {
                    wireRopeSystem.IncreaseIntermidiate(0);

                    }
                }
                else if (currecntS1Inter > totalIntermediate)
                {
                    var timeDiff = currecntS1Inter - totalIntermediate;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        wireRopeSystem.DecreaseIntermidiate(0);

                    }
                }
                currecntS1Inter = totalIntermediate;
                break;
            case 1:
                if (currecntS2Inter < totalIntermediate)
                {
                    var timeDiff = totalIntermediate - currecntS2Inter;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        wireRopeSystem.IncreaseIntermidiate(1);

                    }
                }
                else if (currecntS2Inter > totalIntermediate)
                {
                    var timeDiff = currecntS2Inter - totalIntermediate;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        wireRopeSystem.DecreaseIntermidiate(1);

                    }
                }
                currecntS2Inter = totalIntermediate;
                break;
            case 2:
                if (currecntS3Inter < totalIntermediate)
                {
                    var timeDiff = totalIntermediate - currecntS3Inter;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        wireRopeSystem.IncreaseIntermidiate(2);

                    }
                }
                else if (currecntS3Inter > totalIntermediate)
                {
                    var timeDiff = currecntS3Inter - totalIntermediate;
                    for (int i = 0; i < timeDiff; i++)
                    {
                        wireRopeSystem.DecreaseIntermidiate(2);

                    }
                }
                currecntS3Inter = totalIntermediate;
                break;

        }

    }

    void AdjustShockAbsorber(int number)
    {
        //Debug.Log(currentShockAb);

        if (currentShockAb < number) //0 < 2
        {
            var timeCalls = number - currentShockAb;
            for (int i = 0; i < timeCalls; i++)
            {
                //Debug.Log("inc");
                wireRopeSystem.IncreaseDecreadeShockAbsorber(1);

                //followWithOffset.ChangeNewTarget();
            }
        }
        else if (currentShockAb > number) //2 > 0
        {
            var timesCall = currentShockAb - number;
            for (int i = 0; i < timesCall; i++)
            {
                //Debug.Log("dec");
                wireRopeSystem.IncreaseDecreadeShockAbsorber(-1);

            }

        }
        currentShockAb = number;

    }

    void AdjustShockAbsorType(int id)
    {
        wireRopeSystem.ChangeShockAborberType(id);
    }

    void CornerAdjustment(int number)
    {
        if (currentCornerNumber < number) //0 < 2
        {
            var timeCalls = number - currentCornerNumber;
            for (int i = 0; i < timeCalls; i++)
            {
                if (wireRopeSystemUIRef)
                {
                    wireRopeSystem.SetCorners(1);

                }
                //if (followWithOffsetRef)
                //{

                //followWithOffset.ChangeNewTarget();
                //}
                if (ceillingWallFloorSystemUIRef)
                {
                    ceillingWallFloorSystemUI.IncDecCorner(1);
                }

            }
        }
        else if(currentCornerNumber > number) //2 > 0
        {
            var timesCall = currentCornerNumber - number;
            for (int i  = 0; i < timesCall; i++)
            {
                if (wireRopeSystemUIRef)
                {
                    wireRopeSystem.SetCorners(-1);
                }
                if (ceillingWallFloorSystemUIRef)
                {
                    ceillingWallFloorSystemUI.IncDecCorner(1);
                }
            }

        }
        currentCornerNumber = number;
        if (currentCornerNumber == 0)
        {
            //if (followWithOffsetRef)
            //{

            //    followWithOffset.ChangeOldTarget();
            //}
        }
    }

    void NextPreviusAnchorChangeCall(int numberTimes)
    {
        if (numberTimes > currentAnchorIndex) //2>0 next
        {
            var timeCall =   numberTimes - currentAnchorIndex;
            for (int i = 0; i < timeCall; i++)
            {
                wireRopeSystem.NextBackAnchor(1);
            }

        }
        else if (numberTimes < currentAnchorIndex) //1<2 previous
        {
            var timeCall = currentAnchorIndex - numberTimes;
            for (int i = 0; i < timeCall; i++)
            {
                wireRopeSystem.NextBackAnchor(-1);
                //overRoofSystemUI.PreviousAnchor();
            }
        }
        currentAnchorIndex = numberTimes;
    }

    void NextPreviousTensioner(int numberTimes)
    {
        //Debug.Log("checking");
        if (numberTimes > currenttensionerIndex)
        {
            var timeCall = numberTimes - currenttensionerIndex;
            for (int i = 0; i < timeCall; i++)
            {
                wireRopeSystem.ChangeTensionerType(0);
            }
        }
        else if(numberTimes < currenttensionerIndex)
        {
            var timeCall = currentAnchorIndex - currenttensionerIndex;
            for (int i = 0; i < timeCall; i++)
            {
                wireRopeSystem.ChangeTensionerType(1);
            }
        }


        currenttensionerIndex = numberTimes;

    }

    void AdjusteCableTerminationPointAb(int ctaCalss,int ctbCalls)
    {
        if (currentCTA < ctaCalss)
        {
            var timeCalls = ctaCalss - currentCTA;
            for (int i = 0; i < timeCalls; i++)
            {
            wireRopeSystem.ChangeCableTerminationPointA(0);

            }
        }
        else
        {
            var timeCalls =  currentCTA - ctaCalss;
            for (int i = 0; i < timeCalls; i++)
            {

            wireRopeSystem.ChangeCableTerminationPointA(1);
            }
        }


        for (int k = 0; k < ctbCalls; k++)
        {
            if (currentCTB < ctbCalls)
            {
                wireRopeSystem.ChangeCableTerminationPointB(0);

            }
            else
            {
                wireRopeSystem.ChangeCableTerminationPointB(1);

            }
        }

    }
}



[System.Serializable]
public class GameData
{
    public GameObjectData[] gameObjects;

}

[System.Serializable]
public class GameObjectData
{
    public string LifeLineType;
    public string Position;
    public int Corner;
    public int Segment1Length;
    public int Segment2Length;
    public int Segment3Length;

}