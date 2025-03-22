#include <stdio.h>

int find_unique_digit_product(int n) {
    if(n==0)
        return 0;
    int mask=0;
    int pro=1;
    while(n>0){
    int digit =n%10;
    if(!(mask&(1<<digit))){
       pro*=digit;
       mask|=1<<digit;
    }
    n=n/10;
    
    }
    return pro;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



