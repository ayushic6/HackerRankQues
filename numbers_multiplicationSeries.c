#include <stdio.h>
void multiplicationSeries(int n){
    if(n==1){
        printf("1");
        return 0;
    }
    int multi = 1;
    int prev=1,next=2;
    printf("%d\n%d\n",prev,next);
    for(int i=0;i<n-2;i++){
        multi = prev * next;
        prev = next;
        next = multi;
        printf("%d\n",multi);
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    multiplicationSeries(n);
    
}
