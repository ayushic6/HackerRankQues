#include <stdio.h>

int sum_digits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int is_prime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int factor_sum(int x) {
    int sum = 0;
    for (int i = 2; i <= x; i++) {
        while (x % i == 0) {
            sum += sum_digits(i);
            x /= i;
        }
    }
    return sum;
}

int is_smith(int x) {
    if (is_prime(x)) return 0;

    int digit_sum = sum_digits(x);
    int prime_sum = factor_sum(x);

    return digit_sum == prime_sum;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", is_smith(x)); 
    return 0;
}
