#include <stdio.h>
/*
 * * * * *
 * * *
 *
 * * *
 * * * * *
 */
int pattern10()
{
    int i, j, n = 3;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        for (j = 0; j < i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}