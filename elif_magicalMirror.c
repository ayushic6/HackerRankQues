#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    
    int a=num % 2 == 0 && num > 10;
    int b=num > 15 && num % 3 == 0;
    int c=num % 7 == 0;
    int conditionsMet = a+b+c;
    
    if(num>0){
        if (conditionsMet == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL", num);
    } else if (conditionsMet == 2) {
        printf("The verdict for the number %d is: MIRACULOUS", num);
    } else if (conditionsMet == 1) {
        printf("The verdict for the number %d is: MAGICAL", num);
    } else if (conditionsMet == 0) {
        printf("The verdict for the number %d is: NORMAL", num);
    }
    }
    else {
        printf("The verdict for the number %d is: INVALID", num);
    }
    
    

    return 0;
}
