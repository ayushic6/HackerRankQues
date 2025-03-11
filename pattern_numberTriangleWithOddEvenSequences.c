#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int num = i;
        if(num%2)
            num=1;
        else
            num=2;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }

        printf("\n");
    }

    return 0;
}
