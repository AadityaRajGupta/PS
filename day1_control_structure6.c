#include <stdio.h>
// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
int triangle_type()
{
    int a, b, c;
    // printf("ENTER THE SIDES OF TRIANGLE:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
        printf("EQUILATERAL TRIANGLE\n");
    else if (a == b || b == c || a == c)
        printf("ISOSCELES TRIANGLE\n");
    else
        printf("SCALENE TRIANGLE\n");
    return 0;
}
