#include <stdio.h>
// find the largest number among the three numbers entered by the user.
int largest_of_three()
{
    int a, b, c;
    // largest of three number

    printf("ENTER ANY THREE NUMBER:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d IS LARGEST", a);
    else if (b > a && b > c)
        printf("%d IS LARGEST", b);
    else
        printf("%d IS LARGEST", c);

    return 0;
}
