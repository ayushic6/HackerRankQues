#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    if(n>0){
    for(int i=n ; i>0 ; i--)
    {
        int odd_num=2*i-1;
        printf("%d",odd_num);
        if(i>1){
            printf(" ");
    }
    }
    
    printf(".");
    }
  return 0;
}
