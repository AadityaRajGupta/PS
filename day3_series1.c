#include <stdio.h>

//Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................

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
int series1()
{
    double sum=0;
    int i,n=3;
    for (i=1;i<=n;i++)
    {
        sum=sum+fact(i);
    }
    printf("SUM OF SERIES TILL [%d]: %0.2f",n,sum);
    return 0;
}
