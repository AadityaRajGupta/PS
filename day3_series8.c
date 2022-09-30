#include <stdio.h>
#include <math.h>
//Given a positive integer n and the task is to find the sum of series:   1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).

int series8();
int main()
{
    int sum=0;
    int i,n=4;
    for (i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)*(i+2));
    }
    printf("SUM OF SERIES TILL [%d]: %d",n,sum);
    return 0;
}
