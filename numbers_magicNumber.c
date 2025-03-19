#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);
    int origi = num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    while (sum >= 10) {
        int temp = 0;
        while (sum > 0) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }

    if (sum == 1) {
        printf("%d is a magic number", origi);
    } else {
        printf("%d is not a magic number", origi);
    }

    return 0;
}
