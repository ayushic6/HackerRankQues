#include <stdio.h>
#include<stdbool.h>

int main()
{
    int num;
    scanf("%d",&num);
    int twinprime=0;
    for(int i=2;i<=num-2;i++){
        bool prime1=true;
        bool prime2=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime1=false;
                break;
            }
        }
        for(int j=2;j*j<=i+2;j++){
            if((i+2)%j==0){
                prime2=false;
                break;
            }
        }
        if(prime1&&prime2){
            twinprime++;
        }
    }
    printf("%d",twinprime);
    
    return 0;
}
