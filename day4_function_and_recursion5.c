#include <stdio.h>
#include <math.h>
//Display Prime Numbers Between Intervals Using Function

int prime(int num)
{
    int i;
    for(i=2;i<(sqrt(num));i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int start=1,end=100,i;
    printf("ENTER THE RANGE (START:END): ");
    scanf("%d:%d",&start,&end);
    for(i=start;i<end;i++)
    {
        if(prime(i))
        {
            printf("%d  ",i);
        }
    }
    return 0;
}
