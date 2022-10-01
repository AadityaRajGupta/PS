#include <stdio.h>
//Strong numbers less than or equal to N
//145!=1!+4!+5!=1+24+120=145


int d[10]={0};
int fact(int num)
{
    if (num <= 1)
    {
        d[num] = 1;
    }
    else
    {
        if (d[num] == 0)
        {
            d[num] = num * fact(num - 1);
        }
    }
    return d[num];
}
int strong(int num)
{
    int sum=0,temp=num;
    while(temp)
    {
        sum+=fact(temp%10);
        temp/=10;
    }
    if (sum==num)
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
    int start=1,end=50000,i;
    printf("ENTER THE RANGE (START:END): ");
    scanf("%d:%d",&start,&end);
    for(i=start;i<end;i++)
    {
        if(strong(i))
        {
            printf("%d  ",i);
        }
    }
    return 0;
}