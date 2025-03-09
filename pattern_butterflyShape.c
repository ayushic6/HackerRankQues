#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    if(n<2 || n==0 || n<0){
        printf("Shape Not Possible");
        return 0;
    }
    if(n>=2){
        for(int i= 1 ; i<=n; i++){
            for(int j=1 ; j<=i ; j++){
                printf("*");
            }
            for(int k=3; k<=2*(n-i+1);k++){
            printf(" ");
            }
            for(int j=1 ; j<=i ; j++){
                printf("*");
            }
            printf("\n");
        }
        
        for(int i= 2 ; i<=n; i++){
            for(int j=1 ; j<=n-i+1 ; j++){
                printf("*");
            }
            for(int k=3; k<=2*i;k++){
            printf(" ");
            }
            for(int j=1 ; j<=n-i+1 ; j++){
                printf("*");
            }
            printf("\n");
        }
    }
 return 0;
}
