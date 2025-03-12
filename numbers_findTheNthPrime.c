#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;  
    int num = 2;    

    while (count < n) {
        int is_prime = 1;  
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  
                break;
            }
        }

        if (is_prime) {
            count++;  
        }

        if (count == n) {
            printf("%d", num); 
            break;
        }

        num++;  
    }

    return 0;
}
