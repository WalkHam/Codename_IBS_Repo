using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class BrainSFX : MonoBehaviour
{

    [Header("Wwise Events")]
    public AK.Wwise.Event brainAmb;





    // Start is called before the first frame update
    void Start()
    {
        brainAmb.Post(gameObject);
    }

    
}
