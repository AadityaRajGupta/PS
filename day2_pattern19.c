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