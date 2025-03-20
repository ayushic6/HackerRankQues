#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int origi = num, sum = 0;
    
    while (num > 0) {
        int last = num % 10;
        int multi = 1; 
        
        for (int i = last; i > 0; i--) {
            multi *= i;
        }
        
        sum += multi;
        num /= 10;
    }

    if (sum == origi) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
