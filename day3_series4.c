#include <stdio.h>
#include <math.h>
//1- x + x2/2! - x3/3! + x4/4!......
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
int series4();
int main()
{
    double sum=1;
    int i,n=3,x=1;
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
            sum=sum+(pow(x,i)/fact(i));
        else 
            sum=sum-(pow(x,i)/fact(i));
    }
    printf("SUM OF SERIES TILL [%d]: %0.2f",n,sum);
    return 0;
}
