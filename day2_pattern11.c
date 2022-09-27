#include <stdio.h>
/*
1        1
12      21
123    321
1234  4321
1234554321
*/
int pattern11()
{
    int i, j, num = 0, s, n = 5,sum;
    for (i = 0; i < n; i++)
    {
        num = 1;
        s = 0;
        for (j = 0; j < i + 1; j++)
        {
            sum=num+s;
            printf("%d", sum);
            s++;
        }
        for (j = 2; j < 2 * (n - i); j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("%d",sum--);
        }
        printf("\n");
    }
    return 0;
}