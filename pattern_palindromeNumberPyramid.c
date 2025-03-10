#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=50){
        
    
    for(int i=1;i<=n;i++){
        int x=1;
        for(int k=2;k<=n-i+1;k++)
            printf(" ");
        for(int j=1;j<=(2*i)-1;j++){
            if(j<=i)
                printf("%d",x++);
            else
                printf("%d",--x-1);
            }printf("\n");
        }
    }
    }
