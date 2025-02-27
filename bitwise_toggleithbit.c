#include <stdio.h>

int main() {
    int num,ibit;
    scanf("%d %d",&num,&ibit);

    printf("%d",num=num^(1<<ibit));
    
    
    return 0;
}
