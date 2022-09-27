#include <stdio.h>
/*
Pattern for N = 4
   1
  2 3
 3 4 5
4 5 6 7
*/
int pattern2()
//int main()
{
    int i, j, num = 0, s;
    for (i = 0; i < 4; i++)
    {
        num++;
        s = 0;
        for (j=4-i;j>0;j--)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", num + s);
            s++;
        }
        printf("\n");
    }
    return 0;
}