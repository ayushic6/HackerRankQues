#include <stdio.h>


   int main() 
   {
    int n;
    scanf("%d",&n);
       
    int x=n>>2;
       if(x<<2==n)
       {
           printf("Yes");
       }
       else
       {
         printf("No");  
       }
           
   return 0;
}
