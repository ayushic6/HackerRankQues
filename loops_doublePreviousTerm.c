#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        return 0;
    }
    printf("<"); 
    for (int i = 0; i < n; i++) {
        int term = 1 << i;  
        printf("%d", term);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf(">");
    return 0;
}
