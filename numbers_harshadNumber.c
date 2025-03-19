#include <stdio.h>

int main() {
    int num, sum = 0, last;
    scanf("%d", &num);
    int origi = num;
    while (num > 0) {
        last = num % 10;
        sum = sum + last;
        num = num / 10;  
    }
    if (origi % sum == 0) {
        printf("%d is a harshad number", origi);
    } else {
        printf("%d is not a harshad number", origi);
    }

    return 0;
}
