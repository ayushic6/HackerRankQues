#include <stdio.h>

int main() {
int n,current=1;
scanf("%d",&n);
int num=1;
for(int i=1;i<=n;i++)
{   int num=current + i-1;
    for(int j=0;j<i;j++)
    {   if(j==0)
         printf("%d ",num); 
        
     else{
         printf("%d ",num-j);
     }
    }printf("\n");
    current+=i;
}
    return 0;
}
