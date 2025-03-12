#include <stdio.h>

int main() {
    int num, binary = 0, base = 1;
    
    scanf("%d", &num);
    int original = num;
    while (num > 0) {
        int last_bit = num % 2;
        binary =binary + last_bit * base;
        num =num/ 2;
        base *= 10;
    }

    printf("Binary equivalent of %d: %d\n",original,binary);
    return 0;
}
