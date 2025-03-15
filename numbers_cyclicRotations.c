#include <stdio.h>
int main() {
    int n,count=0,x=1,num;
    
      scanf("%d",&n);
    
        int a=n;
      while(a>0)
      {
          count++;
          a=a/10;
          x=x*10;
      }
        x=x/10;
        for(int i=1;i<=count;i++)
        {
            num=(n%10)*x+n/10;
            printf("%d\n",num);
            n=num;
        }
}
