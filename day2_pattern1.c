#include <stdio.h>
#include "pattern2.c"
#include "pattern3.c"
#include "pattern4.c"
#include "pattern5.c"
#include "pattern6.c"
#include "pattern7.c"
#include "pattern8.c"
#include "pattern9.c"
#include "pattern10.c"
#include "pattern11.c"
#include "pattern12.c"
#include "pattern13.c"
#include "pattern14.c"
#include "pattern15.c"
#include "pattern16.c"
#include "pattern17.c"
#include "pattern18.c"
/*
1
23
345
4567
*/
int pattern1()
{
    int i, j, num = 0, s;
    for (i = 0; i < 4; i++)
    {
        num++;
        s = 0;
        for (j = 0; j < i + 1; j++)
        {
            printf("%d", num + s);
            s++;
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();

    printf("\n\n");
    pattern12_short();
    return 0;
}