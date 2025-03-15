#include <stdio.h>

int main() {
    int num,reverse=0;
    scanf("%d",&num);
    int original=num;
    while(num>0){
        int last =num%10;
        reverse=(reverse*10)+last;
        num/=10;
    }
    if(reverse==original)
        printf("YES");
    else
        printf("NO");
   return 0;
}
