#include <stdio.h>

int main() {
    int num,sum=0;
    scanf("%d",&num);
    
    for(int i=1;i<num; i++){
        if(num%i==0){
        int temp = i;
        sum+=temp;
           
    }
    }
    if(sum==num){
        printf("YES");
    }
    else
        printf("NO");
  return 0;
}
