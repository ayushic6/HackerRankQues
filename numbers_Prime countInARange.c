#include <stdio.h>

int main() {
    int num, num2, sum = 2, flag, x = 1, n = 0;
    scanf("%d %d", &num, &num2);

    int temp = num; 

    
    while (num <= num2) {
        flag = 0;

        if (num < 2) {
            num++;
            continue;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            n++;
            x++;
        }
        num++;
    }
    printf("%d\n", n);

    
    num = temp; 
    while (num <= num2) {
        flag = 0;

        if (num < 2) { 
            num++;
            continue;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d ", num);
            x++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
