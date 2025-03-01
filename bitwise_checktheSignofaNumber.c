#include <stdio.h>

int main() {
int x;
scanf("%d",&x);
if(x==0){
 printf("Positive");
 return 0;
}
if((x>>31)&&1)
    printf("Negative");
else
    printf("Positive");
    return 0;
}
