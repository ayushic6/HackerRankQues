#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i++) {
        int primeFactors = 0;
        int num = i;

        for (int j = 2; j * j <= num; j++) {
            while (num % j == 0) {
                primeFactors++;
                num /= j;
            }
        }
        
        if (num > 1) {
            primeFactors++;
        }

        if (primeFactors == 2) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
