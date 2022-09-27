#include <stdio.h>
//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
int quadrant()
{
    int x,y;
    printf("ENTER THE X-Y COORDINATES:");
    scanf("%d%d",&x,&y);

    if (x>0 && y>0)
        printf("\nFIRST QUADRANT");
    else if (x<0 && y>0)
        printf("\nSECOND QUADRANT");
    else if (x<0 && y<0)
        printf("\nTHIRD QUADRANT");
    else
        printf("\nFOURTH QUADRANT");
    return 0;
}
