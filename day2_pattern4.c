#include <stdio.h>
/*
A
BC
CDE
DEFG
*/
int pattern4()
{
    int i, j, s;
    char ch = 'A';
    for (i = 0; i < 4; i++)
    {
        s = 0;
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", ch + s);
            s++;
        }
        ch++;
        printf("\n");
    }
    return 0;
}