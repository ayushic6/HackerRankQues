#include <stdio.h>

int main() {
    int num,ibit;
    scanf("%d \n%d",&num,&ibit);
    
        printf("%d",num=num | (1<<ibit));
    
    
    return 0;
}
