#include <stdio.h>
/*
A
BB
CCC
*/
int pattern3()
//int main()
{
    int i, j;
    char ch = 'A';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}