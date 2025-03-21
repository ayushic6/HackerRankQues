#include <stdio.h>
int calculate(int num1, int num2, char op){
    if(op == '*'){
        int multi = num1*num2;
        return multi;
    }
     else if(op == '/'){
         if(num2==0){
             return -1;
         }
        int divi = num1/num2;
        return divi;
    }
    else if(op == '+'){
        int add = num1+num2;
        return add;
    }
    else if(op == '-'){
        int sub = num1- num2;
        return sub;
    }
    else
        return -1;
    
}
int main(){
    int num1,num2;
    char op;
    scanf("%d %d",&num1,&num2);
    scanf(" %c",&op);
    int value = calculate(num1,num2, op);
    printf("%d\n",value);
    
    
    
}
