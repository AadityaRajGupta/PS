#include <stdio.h>
#include <math.h>
//x- x3/3! + x5/5! - x7/7!........ 
int d[10]={0};
float fact(int num)
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
    int i,n=4,x=1,num=1;
    for (i=0;i<n;i++)
    {
        if (i%2==0)
        {
            sum=sum+(pow(x,num)/fact(num));
        }
        else
        {
            sum=sum-(pow(x,num)/fact(num));
        }
        num+=2;
    }
    printf("SUM OF SERIES TILL [%d]: %f",n,sum);
    return 0;
}
