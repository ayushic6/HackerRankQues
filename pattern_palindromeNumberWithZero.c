#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int x=i;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        
        for(int j=1;j<=i;j++){
            printf("%d",--x);
        }
        
        for(int j=2;j<=i;j++){
            printf("%d",++x);
        }
        printf("\n");
    }
   return 0;
}
