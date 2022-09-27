#include <stdio.h>
#include <math.h>
//x- x3/3! + x5/5! - x7/7!........ 
int d[1000]={0};
int fact(int num)
{
    if (num <= 1)
    {
        d[num] = 1;
    }
    else
    {
        if (d[num] == 0)
        {
            d[num] = num * fact(num - 1);
        }
    }
    return d[num];
}
int series5();
int main()
{
    double sum=0;
    int i,n=2,x=1,c=0;
    for (i=1;i<=n;i=i+2)
    {
        if (c%2==0)
        {
            sum=sum+(pow(x,i)/fact(i));
        }
        else
        {
            sum=sum-(pow(x,i)/fact(i));
        }
    }
    printf("SUM OF SERIES TILL [%d]: %0.2f",n,sum);
    return 0;
}
