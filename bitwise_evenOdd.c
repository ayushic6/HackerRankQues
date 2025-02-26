#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    if(num>=-100000 && num<=100000)
    {
        if(num & 1==1)
        {
            printf("Odd");
        }
        else
        {
            printf("Even");
        }
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
