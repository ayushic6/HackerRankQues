#include <stdio.h>

int main() {
      int x,y;
    scanf("%d %d",&x,&y);
   int sub=x-y;
    if(sub>>31)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
        
    
      return 0;
}
