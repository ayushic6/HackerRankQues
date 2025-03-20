#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 2 != 0) {
        printf("No Solution");
        return 0;
    }

    for (int p = 2; p <= num / 2; p++) {  
        int q = num - p;

        int flag1 = 1;
        for (int i = 2; i * i <= p; i++) {  
            if (p % i == 0) {
                flag1 = 0;
                break;
            }
        }

        int flag2 = 1;
        for (int i = 2; i * i <= q; i++) {  
            if (q % i == 0) {
                flag2 = 0;
                break;
            }
        }

        if (flag1 && flag2) {  
            printf("%d %d", p, q);
            return 0;
        }
    }

    printf("No Solution");
    return 0;
}
