#include<stdio.h>

int GCD(int a , int b){
if(b==0)
    return a;
else return GCD(b, a%b);
}


int main(){
int a, b;
scanf("%d %d",&a, &b);

int gcd = GCD(a,b);

int lcm = (a*b)/gcd;
printf("%d",lcm);
return 0;
}
