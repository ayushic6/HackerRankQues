#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d",&x);
    int angle=x%360;
     if (angle == 0 && x!=0) 
     {
        printf("Full Rotation\n");
    }
    else if (angle < 90) 
    {
        printf("Acute Angle\n");
    } 
    else if (angle == 90) 
    {
        printf("Right Angle\n");
    } 
    else if (angle < 180) 
    {
        printf("Obtuse Angle\n");
    } 
    else if (angle == 180) 
    {
        printf("Straight Angle\n");
    } 
    else if (angle < 360) 
    {
        printf("Reflex Angle\n");
    }
    
    return 0;
}
 
