using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using Vector3 = UnityEngine.Vector3;

public class Target : MonoBehaviour
{
    public float health = 5.0f;
    public int pointValue;

    public ParticleSystem DestroyedEffect;

    [Header("Wwise Events")]
    public AK.Wwise.Event EnemyHit;
    public AK.Wwise.Event EnemyIdle;
    public AK.Wwise.Event EnemyDeath;
    
    public bool Destroyed => m_Destroyed;

    bool m_Destroyed = false;
    float m_CurrentHealth;

    void Awake()
    {
        Helpers.RecursiveLayerChange(transform, LayerMask.NameToLayer("Target"));
    }

    void Start()
    {
        if(DestroyedEffect)
            PoolSystem.Instance.InitPool(DestroyedEffect, 16);
        
        m_CurrentHealth = health;
        if(EnemyIdle != null)
            EnemyIdle.Post(gameObject);
    }

    public void Got(float damage)
    {
        m_CurrentHealth -= damage;
        
        if(EnemyHit != null)
            EnemyHit.Post(gameObject);
        
        if(m_CurrentHealth > 0)
            return;

        Vector3 position = transform.position;
        
        //the audiosource of the target will get destroyed, so we need to grab a world one and play the clip through it
        /*if (HitPlayer != null)
        {
            var source = WorldAudioPool.GetWorldSFXSource();
            source.transform.position = position;
            source.pitch = HitPlayer.source.pitch;
            source.PlayOneShot(HitPlayer.GetRandomClip());
        }*/

        if (DestroyedEffect != null)
        {   //play death sound
            EnemyDeath.Post(gameObject);

            var effect = PoolSystem.Instance.GetInstance<ParticleSystem>(DestroyedEffect);
            effect.time = 0.0f;
            effect.Play();
            effect.transform.position = position;

            
        }

        m_Destroyed = true;
        
        gameObject.SetActive(false);
       
        GameSystem.Instance.TargetDestroyed(pointValue);
    }
}
