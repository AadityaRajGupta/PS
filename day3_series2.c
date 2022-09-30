#include <stdio.h>
//Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5

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
int series2();
int main()
{
    double sum=0;
    int i,n=3;
    for (i=1;i<=n;i++)
    {
        sum=sum+(fact(i)/i);
    }
    printf("SUM OF SERIES TILL [%d]: %0.2f",n,sum);
    return 0;
}
