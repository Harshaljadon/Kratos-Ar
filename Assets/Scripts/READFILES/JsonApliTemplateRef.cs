//using System.Collections;
using System.Collections.Generic;
//using UnityEngine;

[System.Serializable]
public class JsonApliTemplateRef_OverTheRoof
{
    public string ClientName; // not need
    public string Module;
    public string AnchorProductCode;
    public string report_no;
    public int Corner;
    public string CornerType; // not need
    public int ShockAbQty;
    public string ShockAbType;
    public int TensionerQTY;
    public string TensionerCode;
    public string CTA;
    public string CTB;
    public int CTAQ;
    public int CTBQ;
    public string CarriageBody;
    public int Segment1Length;
    public int Segment2Length;
    public int Segment3Length;
    public int S1Intermediate;
    public int S2Intermediate;
    public int S3Intermediate;
    public string structure_type;
    public int total_length;
    //public List<Segments> segments;
    //public List<Products> products;
    //public string lifeline;
}

[System.Serializable]
public struct Segments
{
    public float length;
}

[System.Serializable]
public class Products
{
    public string product_name;
    public string category_name;
}

[System.Serializable]
public class JsonApliTemplateRef_OverTheHead
{
    public string client_name;
    public string report_no;
    public string lifeline;
    public string module;
    public string postCode;
    public int shockAbsorberQty;
    public string shockAbsorberProductCode;
    public int tensionerQty;
    public string tensionerProductCode;
    public string CTB; //cableTerminationProductCodeAtStartPointB
    public string CTA; //cableTerminationProductCodeAtStartPointA
    public List<Segments> segments;
    public int intermediate;
}

[System.Serializable]
public class JsonApliTemplateRef_OnTheWallCeilingFloor
{
    public string client_name;
    public string report_no;
    public string lifeline;
    public string lifelineType; // alu rail or wire rope
    public string module;
    public string postCode;
    public int shockAbsorberQty;
    public string shockAbsorberProductCode;
    public int tensionerQty;
    public string tensionerProductCode;
    public string cableTerminationProductCodeAtStartPointA;
    public string cableTerminationProductCodeAtStartPointB;
    public List<Segments> segments;
    public int intermediate;
}

