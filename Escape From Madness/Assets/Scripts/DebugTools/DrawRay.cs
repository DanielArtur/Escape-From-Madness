using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawRay
{

    public static void DrawCustomRay(Vector3 start, Vector3 dir, float distance)
    {
        start.y += 3;

        Debug.DrawRay(start, dir, Color.red);
    }
}
