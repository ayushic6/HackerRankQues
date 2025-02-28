#include <stdio.h>

int main() {
    int n, res;
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    res = n & (n - 1);
    if (res == 0)
        printf("1\n");
    else
        printf("-1\n");

    return 0;
}
