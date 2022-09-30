//pascal triangle
/*
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1

1
11
121
1331
14641
15101051
*/
#include <stdio.h>

int d[101]={0};
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
int ncr(int n,int r)
{
    return (fact(n)/fact(r)/fact(n-r));
}
/*
int fib(int n)
{
    if(n==1)
    {
        d[n]= 0;
    }
    else
    {
        if (n==2)
        {
            d[n]= 1;
        }
        else
        {
            if(d[n]==0)
                d[n]= (fib(n-1)+fib(n-2));
        }
    }
    return d[n];
}
int main()
{
    int count=0;
    for(int i=1;i<=100;i++)
    {
        printf(" %u   \n",fib(i));
        count++;
    }
    printf("count: %d",count);
}
*/
int gcd(int dividend,int divisor)
{
    if (dividend%divisor==0)
    {
        return divisor;
    }
    else
    {
        gcd(divisor,dividend/divisor);
    }
}
int 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n=10;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
    return 0;
}