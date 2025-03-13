#include <stdio.h>

int main() {
    int num, n = 0, m = 0, prime1 = 0, prime2 = 0;
    scanf("%d", &num);
    
    if (num==1){
        printf("2");
        }
    else{
        int num1 = num;
        int isPrime = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("%d", num);
        return 0;
    }

    for (int i = 2; num > 1; i++) { 
        int isPrime = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            prime1 = num;
            break;
        }
        num++; 
        n++;
    }

    for (int i = 2; num1 > 1; i++) { 
        int isPrime = 1;
        for (int j = 2; j * j <= num1; j++) {
            if (num1 % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            prime2 = num1;
            break;
        }
        num1--; 
        m++;
    }

    if (n < m) {
        printf("%d", prime1);
    } else {
        printf("%d", prime2);
    }

    }
    
    return 0;
}
