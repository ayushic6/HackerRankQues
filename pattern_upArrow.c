#include <stdio.h>

int main(){

int n;
scanf("%d",&n);
if(n==0 || n<0 || n==1 || n==2){
    printf("Shape Not Possible");
    return 0;
}
if(n%2!=0)
    n=n+1;
else
    n=n;
    
    for(int i=1 ; i<=n/2 ; i++)
    {
       
       for(int k=2;k<=(n/2)-i+1 ;k++)
       printf(" ");
       
       for(int j= 1 ; j<=2*i-1 ; j++ ){
       if(j==1|| j==2*i-1 || j==i)
       {printf("*");}
       else{
        printf(" ");
       }
       }
       
       
       printf("\n");
    }
    
    for(int i=1 ; i<=n/2 ; i++)
    {
       
       for(int k=2;k<=n/2 ;k++)
       printf(" ");

       for(int j= 1 ; j<=2*(n-i+1)-1 ; j++ ){
       if( j==1)
       {printf("*");}
       else{
        printf(" ");
       }
       }
       
       printf("\n");
    }
}
    

    
