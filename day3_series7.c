#include <stdio.h>
#include <math.h>
//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…

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
int series7();
int main()
{
    double sum=0;
    int i,n=4,num=1;
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum-(i/fact(num));
        }
        else
        {
            sum=sum+(i/fact(num));
        }
        num+=2;
    }
    printf("SUM OF SERIES TILL [%d]: %f",n,sum);
    return 0;
}
