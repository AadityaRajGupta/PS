#include <stdio.h>
/*
E
DE
CDE
BCDE
ABCDE
*/
int pattern5()
{
    int i, j, s;
    char ch = 'E';
    for (i = 0; i < 5; i++)
    {
        s = 0;
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", ch + s);
            s++;
        }
        ch--;
        printf("\n");
    }
    return 0;
}