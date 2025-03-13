#include <stdio.h>

int main() {
    int num, sum = 2, flag, x = 1;
    scanf("%d", &num);
    
    if (num == 1) {
        printf("%d", sum);
        return 0;
    }
    
    int prime = 3;
    while (x < num) {
        flag = 0;
        
        for (int i = 2; i * i <= prime; i++) {
            if (prime % i == 0) {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) { 
            sum += prime;
            x++;
        }
        prime++;
    }
    
    printf("%d", sum);
    return 0;
}
