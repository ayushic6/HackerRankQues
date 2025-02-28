#include <stdio.h>

int main() {
    int n,res;
    scanf("%d", &n);
    if (n == 0) {
        printf("No\n");
        return 0;
    }
    res=n & ~(n - 1);
 
        printf("%d",res);
       
    return 0;
}
