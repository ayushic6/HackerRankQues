#include <stdio.h>

int main() {

    double x,min;
    int n,i;
    scanf("%lf %d",&x,&n);
    
    double real=x;
    min=x;
    
    for(i=1; i<=n; i++){
        
        
        if(i%2==0 && i%3==0){
            x=x+x*0.7;
            i+=6;
        }
        else if (i%2==0){
            x=x-x/8;
        }
        else if (i%3==0){
            x=x-x/5;
        }
        else {
            x=x-x*0.1;
        }
        if(x<min){
            min=x;
        }
        if(x<real*0.4){
            break;
        }
    }
    
    if(n>i){
       printf("Stopped early after %d days: %.2lf\n",i,x); 
    }
    else{
        i=n;
        printf("After %d days: %.2lf\n",i,x);
    }
    printf("Minimum amount held by Bhaskar: %.2lf\n",min);
    
    if (x>real*0.7){
        printf("Lucky Bhaskar");
    }
    else{
        printf("Better Luck Next Time!");
    }
    
    return 0;
}
