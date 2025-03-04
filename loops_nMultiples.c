#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++) {
        printf("%d ", x * i);
    }
}
