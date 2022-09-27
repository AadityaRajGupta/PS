#include <stdio.h>
/*
   1
  232
 34543
4567654
*/
int pattern6()
{
    int i, j, num = 0, s, sum;
    for (i = 0; i < 4; i++)
    {
        num++;
        s = 0;
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            sum = num + s;
            printf("%d", sum);
            s++;
        }
        sum--;
        for (j = 0; j < i; j++)
        {
            printf("%d", sum--);
        }
        printf("\n");
    }
    return 0;
}