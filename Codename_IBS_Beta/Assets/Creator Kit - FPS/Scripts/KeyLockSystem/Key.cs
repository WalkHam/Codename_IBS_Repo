using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Key : MonoBehaviour
{
    public string keyType;
    public Text KeyNameText;

    [Header("Wwise Event")]
    public AK.Wwise.Event keyPickup;

    void OnEnable()
    {
        KeyNameText.text = keyType;
    }

    void OnTriggerEnter(Collider other)
    {
        var keychain = other.GetComponent<Keychain>();

        if (keychain != null)
        {
            keychain.GrabbedKey(keyType);
            Destroy(gameObject);

            //play wwise event when picked up
            keyPickup.Post(gameObject);
        }
    }
}
