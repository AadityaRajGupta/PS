#include <stdio.h>

//Write a program to print all perfect numbers in given range using the function.

int perfect_or_not(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int start=1,end=100,i;
    printf("ENTER THE RANGE (START:END): ");
    scanf("%d:%d",&start,&end);
    for(i=start;i<end;i++)
    {
        if(perfect_or_not(i))
        {
            printf("%d  ",i);
        }
    }
    return 0;
}