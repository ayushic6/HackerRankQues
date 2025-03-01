#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int diff=x-y;
    int sign=(diff>>31);
    int max=y&(sign) | x&(~sign);
    printf("%d",max);
    
        
    
      return 0;
}
