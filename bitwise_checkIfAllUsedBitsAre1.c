#include <stdio.h>

int main() {
    int n,res;
    scanf("%d", &n);
    if (n == 0) {
        printf("No\n");
        return 0;
    }
    res=n & (n + 1);
        if(res==0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
