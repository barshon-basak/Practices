/*
C program to find sum of following series
 1 +1/x^1 + 1/x^2 + 1/x^3 ... + 1/x^n 
*/

#include<stdio.h>
#include<math.h>


int main()
{
    int num,x;
    scanf("%d",&num);
    scanf("%d",&x);
float sum= 0.0 ;

for ( int i=1; i<=num ; i++){
    sum += 1 + (1/(float)(pow(x,i)));
}

printf("%.2f",sum);
return 0;
}
