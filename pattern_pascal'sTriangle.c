

#include <stdio.h>

int main() {
    int n, i, j, num;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = 1;

        for(int k = i; k < n; k++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / j;
        }

        printf("\n");
    }

    return 0;
}
