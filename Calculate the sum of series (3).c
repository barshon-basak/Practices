/*
C program to find sum of following series
 1+ 11 + 111 + 1111 +.....n
*/

#include<stdio.h>
#include<math.h>

int function(int n){
if(n==1)
    return 1;
else
    return pow(10,(n-1)) + function(n-1);
}
int main()
{
    int num;
    scanf("%d",&num);
    int sum= 0;

for ( int i=1; i<=num ; i++){
    sum = sum + function(i);
}

printf("%d",sum);
return 0;
}
