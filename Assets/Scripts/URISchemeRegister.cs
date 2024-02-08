using UnityEngine;
using System;
using Microsoft.Win32;

public class URISchemeRegister : MonoBehaviour
{
    [SerializeField]
    private string schemeName = "mygame";
    [SerializeField] string productName = "MyGame.exe";
    void Start()
    {
        RegisterURI();
    }

    void RegisterURI()
    {
        try
        {
            RegistryKey key = Registry.CurrentUser.CreateSubKey("SOFTWARE\\Classes\\" + schemeName);
            key.SetValue("", "URL:My Game Protocol");
            key.SetValue("URL Protocol", "");

            RegistryKey shell = key.CreateSubKey("shell");
            RegistryKey open = shell.CreateSubKey("open");
            RegistryKey command = open.CreateSubKey("command");
            //command.SetValue("", "\"" + Application.dataPath + "/MyGame.exe\" \"%1\"");
            command.SetValue("", "\"" + Application.dataPath + "/"+ productName+"\" \"%1\"");
            key.Close();
        }
        catch (Exception e)
        {
            Debug.LogError("Failed to register URI scheme: " + e.Message);
        }
    }
}
