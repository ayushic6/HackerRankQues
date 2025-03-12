#include <stdio.h>

int main() {

    int n,num=1,a;
    
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++){
            for (int k=1; k<=n-i; k++){
                printf("  ");
            }
            for (int j=1; j<=2*i-1; j++){
                
                if (i==j && i!=1){
                    a=(num-1)*(i+j-2);
                    printf("%d ",a);
                }
               
                else {
                    printf("%d ",num);
                    num+=2;
                }
            }
        printf("\n");
        }
    
    return 0;
}
