#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    }
    else {
        int x=1;
        
        for (int i = 1; (n & 1) == 0; x++) {
            n = n >> 1;
        }
        printf("%d", x);
    }

    return 0;
}
