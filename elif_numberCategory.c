#include <stdio.h>
#include <math.h>

int main() {
     
    int num;
    scanf("%d",&num);
    int sqnum=sqrt(num);
    
    if(num%2==0 && num%3==0 && num%5!=0)
    {
        printf("A");
    }
    else if(num==22 || num==21 || num==33 || num==35 || num==55 || num==77 )
    {
        printf("B");
    }
    else if(num%3==0 && num%7!=0 && num>9 && num<100 )
    {
        printf("C");
    }
    else if(num%3!=0 && num%7==0 && num>9 && num<100 )
    {
        printf("C");
    }
    else if(num<200 && sqnum*sqnum==num)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}
