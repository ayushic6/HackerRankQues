#include <stdio.h>

int main() {
    int n, maxNumber, current;
     scanf("%d",&n);
    maxNumber = n;
    current = n;

    printf("%d", current);
    
    for (;current != 1;) {
        if (current < 1) {
            current = 1;
        } else if (current % 3 == 0) {
            current /= 3;
        } else if (current % 5 == 0) {
            current -= 5;
        } else {
            current *= 5;
        }
        
        printf(" -> %d", current);
        
        if (current > maxNumber) {
            maxNumber = current;
        }
    }
    
    printf("\nMax Number: %d\n", maxNumber);
    return 0;
}
