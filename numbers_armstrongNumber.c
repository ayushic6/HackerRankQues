#include<stdio.h>
#include<math.h>
int main(){
    int num,digit,sum=0,count=0,temp;
    scanf("%d",&num);
    temp=num;
while(temp!=0)
{
    count++;
    temp/=10;
}
    temp=num;
while(temp!=0)
{
    digit=temp%10;
    sum+=pow(digit,count);
    temp/=10;
}
if(sum==num)
{
    printf("YES");
}
else
{
    printf("NO");
}
    return 0;
}
