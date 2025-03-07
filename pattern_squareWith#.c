#include <stdio.h>

int main() {
    int n;
scanf("%d",&n);
if(n==1 || n<1 || n==2)
{
    printf("Shape Not Possible");
    return 0;
}
if(n<1)
{
    printf("Shape Not Possible");
    return 0; 
}
   if( n>1 ){
        for(int i =1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=n ; j++)
            {
            if(j==1 || i==1 || i==n || j==n)
            {
                printf("*");
            }
            else
                printf("#");
            }
            printf("\n");
            
        }
   }
    
  

        return 0;
}
