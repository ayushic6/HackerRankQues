#include <stdio.h>

int main() {
    int x, count, mask;
    scanf("%d", &x); 

    count = 0;
    mask = x & 0b1111; 

    if (mask & 1)
        count++;
    if (mask & 2) 
        count++;
    if (mask & 4) 
        count++;
    if (mask & 8)  
        count++;
    if(printf("%d", count))
    return 0;
}
