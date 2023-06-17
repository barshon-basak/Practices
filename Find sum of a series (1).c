/*  
C program to find sum of following series
* 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!
*/

#include<stdio.h>
#include<math.h>

int factorial(int n){
if(n==1)
    return 1;
else
    return n * factorial(n-1);
}

int main()
{
    int num ;
    scanf("%d",&num);
float sum= 0.0 ;

for ( int i=1; i<=num ; i++){
    sum += ((float)pow(i,2))/(float)factorial(i);
}

printf("%.2f",sum);
return 0;
}
