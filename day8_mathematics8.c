#include <stdio.h>
// There are some coins given to you of the same denomination. The coins are arranged on a table to form a Pyramid. If the circumference of the coin is given, Find the area of trainble formed by the coins. If the coins do not form the trinagle, print -1.

/* let maximum coins given will 5000
int sum=0;
for(int i=1;i<100;i++)
    sum=sum+i;
printf("%d ",sum);  ==> 4950
*/
int main()
{
    int coin;
    printf("ENTER NUMBER OF COINS:");
    scanf("%d",&coin);

    int sum=0;
    float area_triangle=-1;
    for(int i=1;i<=100;i++)
    {
        sum=sum+i;
        if (sum==coin)
        {
            area_triangle=0.5*i*i;
            printf("\nAREA OF TRIANGLE FORMED: %0.2f",area_triangle);
            printf("\nHEIGHT OF TRIANGLE: %d",i);
            return 0;
        }
    }
    printf("\nAREA OF TRIANGLE FORMED: %0.2f\n",area_triangle);
    printf("NO TRIANGLE POSSIBLE");
    return 0;    
}