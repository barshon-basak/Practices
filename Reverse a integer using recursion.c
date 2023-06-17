/*
Reverse a number using recursion
*/

#include<stdio.h>
#include<math.h>

int function(int num, int dig){
if(num==0){
    return 0;
}
else
    return ((num%10)*pow(10,dig-1)) + function(num/10,dig-1);

}


int main()
{
    int num,ans;
    scanf("%d",&num);
    int dig=0;
int temp = num;
    while(num>0){
        dig++;
        num=num/10;
    }
ans = function(temp,dig);
printf("%d",ans);
return 0;
}
