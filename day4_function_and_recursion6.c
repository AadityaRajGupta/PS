#include <stdio.h>
#include <math.h>
//Armstrong number in the range

int armstrong(int num)
{
    int temp=num,count=0,sum=0;
    while(temp)
    {
        count++;
        temp/=10;
    }
    temp=num;
    while(temp)
    {
        sum+=(int)pow(temp%10,count);
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
    int start=1,end=200,i;
    printf("ENTER THE RANGE (START:END): ");
    scanf("%d:%d",&start,&end);
    for(i=start;i<end;i++)
    {
        if(armstrong(i))
        {
            printf("%d  ",i);
        }
    }
    return 0;
}