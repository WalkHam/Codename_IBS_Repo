using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class UIAudioPlayer : MonoBehaviour
{
    public static UIAudioPlayer Instance { get; private set; }

    public AK.Wwise.Event menuSelect;
    public AK.Wwise.Event negativeTest;
    public AK.Wwise.Event menuHover;


    void Awake()
    {
        
        Instance = this;
    }

    public static void PlayPositive()
    {
        Instance.menuSelect.Post(Instance.gameObject);
    }

    public static void PlayNegative()
    {
        Instance.negativeTest.Post(Instance.gameObject);
    }

    public static void PlayHover()
    {
        Instance?.menuHover.Post(Instance.gameObject);
    }
}
