#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Shape Not Possible");
        return 0;
    }
   
    
    for(int i=1;i<=n ; i++){
        for(int j=1 ; j<=i; j++)
        {
            if(j%2){
                if(i%2)
                    printf("1");
                else
                    printf("0");
            }
            else{
                if(i%2)
                    printf("0");
                else
                    printf("1");
            }
            
        }printf("\n");
        
    }
    

  return 0;
}
