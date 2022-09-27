#include <stdio.h>

/*
Pattern for N = 4
   1
  212
 32123
4321234
*/
int pattern7()
{
    int i, j, num, s, sum;
    for (i = 0; i < 4; i++)
    {
        num = 5;
        s = 0;
        for (j = 0; j < 4 - i; j++)
        {
            printf(" ");
            num--;
        }
        for (j = 0; j < i + 1; j++)
        {
            sum = num - s;
            printf("%d", sum);
            s++;
        }
        sum++;
        for (j = 0; j < i; j++)
        {
            printf("%d", sum++);
        }
        printf("\n");
    }
    return 0;
}