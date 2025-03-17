#include <stdio.h>

int main() {
    long long int num;
    int n = 0, flag;

    scanf("%lld", &num);
    
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int last = num % 10;
        num = num / 10;
        
        
        if (last < 2) {
            continue; 
        }

        flag = 1; 
        
        for (int i = 2; i * i <= last; i++) {
            if (last % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            n++;
        }
    }

    printf("%d", n);
    return 0;
}
