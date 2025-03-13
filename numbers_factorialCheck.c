#include <stdio.h>

int main() {
    unsigned long long num;
    scanf("%llu", &num);

    if (num < 1) {
        printf("NO");
        return 0;
    }

    unsigned long long multi = 1;
    int n = 1;

    while (multi < num) {
        n++;
        multi *= n;
        if (multi > num) { 
            printf("NO");
            return 0;
        }
    }

    if (multi == num) {
        printf("%d", n);
    } else {
        printf("NO");
    }

    return 0;
}
