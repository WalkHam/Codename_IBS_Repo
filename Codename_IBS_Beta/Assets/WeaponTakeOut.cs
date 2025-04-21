using UnityEngine;
using AK.Wwise;  // Namespace for Wwise events

public class PlaySoundOnAnimation : MonoBehaviour
{
    public AK.Wwise.Event soundEvent;  // Reference to the Wwise event
    public Animator animator;          // Reference to the Animator

    void Start()
    {
        // Optionally start playing sound when the animation starts
        PlaySound();
    }

    void PlaySound()
    {
        if (soundEvent != null)
        {
            soundEvent.Post(gameObject);  // Triggers the sound event on the current game object
        }
    }

    // This method can be tied to a specific animation trigger or event.
    public void OnAnimationEvent()
    {
        PlaySound();  // This can be triggered during specific animation events
    }
}