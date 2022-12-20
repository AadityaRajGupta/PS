#include <stdio.h>
// Given two numbers A and B, find Kth digit from right of A to the power B.

float power(int a,int b)
{
    float temp;
    if(b==0)
        return 1;
    temp=power(a,b/2);

    if (b%2==0)
        return temp*temp;
    else
    {
        if (b>0)
            return a*temp*temp;
        else
            return (temp*temp)/a;
    }
}
int kth_digit(int num,int k)
{
    int rem,i=0;
    while(num!=0 && i++!=k)
    {
        rem=num%10;
        num=num/10;
    }
    return rem;
}
int main()
{
    int a,b,k;
    printf("ENTER THE VALUE OF A , B , K: ");
    scanf("%d%d%d",&a,&b,&k);
    printf("%dTH DIGIT FROM RIGHT OF %d TO THE POWER %d: %d ",k,a,b,kth_digit(power(a,b),k));
    return 0;
}