using UnityEngine;

public class WwiseGameStart : MonoBehaviour
{
    void Start()
    {
        AkSoundEngine.PostEvent("Game_Start", gameObject);
    }
}