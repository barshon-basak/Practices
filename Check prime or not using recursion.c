#include<stdio.h>

int CheckPrime(int i,int num)
{
    if(num==i)
        return 1;
    else
        if(num%i==0)
            return 0;
    else{
        return CheckPrime(i+1,num);
    }
}
int main()
{
    int num ;
    scanf("%d",&num);

    if(CheckPrime(2,num)==1)
        printf("It is a Prime Number.");
    else
        printf("It is not a Prime Number.");

return 0;
}
