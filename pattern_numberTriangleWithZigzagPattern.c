#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num=i;
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            if(j%2!=0){
                num = num + 2*(n-i)+1;
            }
            else{
                num = num + 2*(i-j);
            }
        }
        printf("\n");
    }
    return 0;
}
