#include <stdio.h>
// Given radius of a circle, find the area of largest possible rectangle which may be enclosed completely within it.

int main()
{
    int radius;
    printf("ENTER RADIUS OF A CIRCLE:");
    scanf("%d",&radius);

    printf("\nAREA OF LARGEST POSSIBLE RECTANGLE: %d",2*radius*radius);
    return 0;
}