using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EsciApplicazione : MonoBehaviour
{

    public AudioSource audioSource;

    public void Esci(){
        StartCoroutine(playAudio());
        #if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }

    IEnumerator playAudio(){
        audioSource.Play();
        yield return new WaitWhile(() => audioSource.isPlaying);
    }
}
