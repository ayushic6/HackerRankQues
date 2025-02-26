#include <stdio.h>

int main() {
     int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=-100000 && num1<=100000 && num2>=-100000 && num2<=100000)
    {
        num1=num1^num2;
        num2=num1^num2;
        num1=num2^num1;
        printf("%d \n%d",num1,num2);
    }
     return 0;
}
