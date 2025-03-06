#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int count=0;
int first=1;
for(int i=n;i>=1;i--)
{
    if(n%i==0)
    {
       if(count%2==0)
       {
           if(first)
           {
               printf("%d",i);
               first=0;
           }
           else
           {
               printf(" %d",i);
           }
       }
        count++;
    }
}
 printf(".") ;  
 return 0;
}
