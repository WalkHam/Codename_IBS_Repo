using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class WwiseEventTrigger : MonoBehaviour
{
    //which event should trigger?
    public AK.Wwise.Event WwiseEvent;

    //where should the sound come from?
    public GameObject SoundSource;

    public void EventTrigger()
    {
        WwiseEvent.Post(SoundSource);
    }
}
