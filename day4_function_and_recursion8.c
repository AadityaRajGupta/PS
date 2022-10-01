#include <stdio.h>
//gcd of two numbers

int gcd(int dividend,int divisor)
{
    if (dividend%divisor==0)
    {
        return divisor;
    }
    else
    {
        gcd(divisor,dividend%divisor);
    }
}

int main()
{
    int a,b,hcf,temp;
    printf("ENTER ANY TWO NUMBERS:");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    hcf=gcd(a,b);
    printf("GCD OF [%d] and [%d] : %d",a,b,hcf);
}