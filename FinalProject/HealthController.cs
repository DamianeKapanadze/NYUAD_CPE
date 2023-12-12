using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthController : MonoBehaviour
{
    public Image[] alive;
    public Image[] dead;
    public static HealthController instance;

    // Start is called before the first frame update
    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        for(int i = 0; i < alive.Length; i++)
        {
            alive[i].enabled = true;
            dead[i].enabled = false;
        }
    }

    // Update is called once per frame
    public void kill()
    {
        for (int i = alive.Length-1; i >= 0 ; i--)
        {
            //Debug.Log(i);
            if(alive[i].enabled == true)
            {
                dead[i].enabled = true;
                alive[i].enabled = false;
                break;
            }

        }
    }
}
