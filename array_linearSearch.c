#include <stdio.h>

int main(){
    int target;
    scanf("%d",&target);
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i = 0 ;i<size;i++){
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for(int i=0;i<size;i++){
        if(target == a[i]){
            flag=1;
            printf("%d",i);
        }
    }
    if(flag==0){
        printf("-1");
    }
    
    
}
