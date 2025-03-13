#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int x = 2, sum = 0;
    
    while (num > 1) {
        if (num % x == 0) {
            sum += x;
            num = num / x;
        } else {
            ++x;
        }
    }
    
    printf("%d", sum);
    return 0;
}
