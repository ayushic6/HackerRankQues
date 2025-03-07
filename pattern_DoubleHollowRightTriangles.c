#include <stdio.h>

int main() {
   int n;
    scanf("%d",&n);
     if (n <= 1) {
        printf("Shape Not Possible");
        return 0;
    }
        for(int i = 1; i <=n ; i++)
        {
            for(int j=1 ; j<=i ; j++)
            {
            if(j==1 || j==i|| i==n)
            {
                
                    printf("*");
            }
            else
                printf(" "); 
            }
            for(int k=3 ; k<=2*(n-i+1) ; k++)
            {
              printf(" ");  
            }
            
            for(int j=1 ; j<=i ; j++)
            {
            if(j==1 || j==i || i==n)
            {
                
                    printf("*");
            }
            else
                printf(" "); 
            }
            printf("\n");
                
            
            
            
    }
               
                
           
   return 0;

}
