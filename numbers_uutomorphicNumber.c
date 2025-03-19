#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    int newnum = num * num;

    int temp = num, digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    int last = newnum % (int)pow(10, digits);
    
    if (last == num) {
        printf("%d is automorphic", num);
    } else {
        printf("%d is not automorphic", num);
    }

    return 0;
}
