#include <stdio.h>
/*
1 2 3 4 5 6 5 4 3 2 1
1 2 3 4 5   5 4 3 2 1
1 2 3 4       4 3 2 1
1 2 3           3 2 1
1 2               2 1
1                   1
*/
int pattern12()
{
    int i, j, num = 0, s, n = 6;
    for (i = 0; i < n; i++)
    {
        num = 1;
        s = 0;
        for (j = 0; j < n-i; j++)
        {
            printf("%d ", num+s);
            s++;
        }
        for (j = 1; j < 2*i ; j++)
        {
            printf("  ");
        }
        if (s==n)
        {
            s--; 
        }
        for (j = 0; j < n-i; j++)
        {
            if (s==0)
                continue;
            printf("%d ",(s--));
        }
        
        
        printf("\n");
    }
    return 0;
}
int abs(int a)
{
    if (a>0)
        return a;
    else
        return ((-1)*a);
}
//aryan approach
int pattern12_short()
{
    int n=6;
    for (int i=0;i<n;i++)
    {
        for(int j=-1*n;j<n-1;j++)
        {
            if ((n-abs(j+1))<=(n-i))
                printf("%d ",n-abs(j+1));
            else
                printf("  ");
        }
        printf("\n");
    }
}
