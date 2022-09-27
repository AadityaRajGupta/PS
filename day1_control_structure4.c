#include <stdio.h>
// check whether the year entered by the user is a leap year or not.
int check_leap_year()
{
    int num;
    // printf("ENTER ANY YEAR:");
    scanf("%d", &num);
    printf("\n\n");
    (num % 4 == 0 && (num % 400 == 0 || num % 100 != 0)) ? printf("Leap year") : printf("Not Leap year");
    return 0;
}
