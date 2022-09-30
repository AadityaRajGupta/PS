#include <stdio.h>
#include "day2_pattern2.c"
#include "day2_pattern3.c"
#include "day2_pattern4.c"
#include "day2_pattern5.c"
#include "day2_pattern6.c"
#include "day2_pattern7.c"
#include "day2_pattern8.c"
#include "day2_pattern9.c"
#include "day2_pattern10.c"
#include "day2_pattern11.c"
#include "day2_pattern12.c"
#include "day2_pattern13.c"
#include "day2_pattern14.c"
#include "day2_pattern15.c"
#include "day2_pattern16.c"
#include "day2_pattern17.c"
#include "day2_pattern18.c"
#include "day2_pattern19.c"
#include "day2_pattern20.c"
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
    pattern15();

    printf("\n\n");
    pattern12_short();
    return 0;
}