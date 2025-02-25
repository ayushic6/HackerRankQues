#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x<1 && y<1 && z<1 && x<=1000000000 && y<=1000000000 && z<=1000000000)
    {
        printf("Invalid Input");
    }
    else if(x%y==0 && x%z==0)
    {
        printf("X defeats all!");
    }
    else if(x%y==0)
    {
        printf("Y triumphs over X!");
    }
    else if(x%z==0)
    {
        printf("Z outsmarts X!");
    }
    else
    {
        printf("X remains undefeated!");
    }
    
}
