using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootstepSignal : MonoBehaviour
{
    public static Controller Instance;

    public void SendSignal()
    {
        Controller.Instance.PlayFootstep();
    }
}
