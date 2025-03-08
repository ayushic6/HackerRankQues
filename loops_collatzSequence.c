#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n);
    for(int i=n; i>1 ; i=n )
    {
        if(n%2==0)
        {
            printf(" -> %d",n=(i/2));
        }
        else
            printf(" -> %d",n= (3*i) + 1);
    }
 return 0;
}
