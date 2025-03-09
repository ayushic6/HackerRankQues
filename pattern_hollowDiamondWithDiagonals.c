#include <stdio.h>

int main(){

int n;
scanf("%d",&n);
if(n<1||n<2){
    printf("Shape Not Possible");
    return 0;
}
if(n>=2)
{
    for(int i=1 ; i<=n ; i++)
    {
       
       for(int k=2;k<=n-i+1 ;k++)
       printf(" ");
       
       for(int j= 1 ; j<=2*i-1 ; j++ ){
       if(j==1|| j==2*i-1 || i==1 || i==n || i==j)
       {printf("*");}
       else{
        printf(" ");
       }
       }
       
       
       printf("\n");
    }
    
    for(int i=2 ; i<=n ; i++)
    {
       
       for(int k=2;k<=i ;k++)
       printf(" ");

       for(int j= 1 ; j<=2*(n-i+1)-1 ; j++ ){
       if(j==1|| j==2*(n-i+1)-1 || i==n || i==n+1-j)
       {printf("*");}
       else{
        printf(" ");
       }
       }
       
       printf("\n");
    }
}
    

    return 0;
}
