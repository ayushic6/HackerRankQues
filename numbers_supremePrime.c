#include <stdio.h>

int is_prime(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (!is_prime(num)) {
        printf("NO");
        return 0;
    }

    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (is_prime(sum)) 
        printf("YES");
    else 
        printf("NO");

    return 0;
}
