#include <stdio.h>
int checkDay(int day){
    if(day<6){
        return 0;
    }
    else
        return 1;
}
int main(){
    int day;
    scanf("%d",&day);
    int value = checkDay(day);
    printf("%d",value);
}
