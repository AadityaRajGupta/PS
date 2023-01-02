#include <stdio.h>
#include <math.h>
// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. We stop at this point because we are left with one digit.

int digit_sum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    if ((int)log10(sum) != 0)
        return digit_sum(sum);
    return sum;
}
int main()
{
    int num;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&num);

    printf("Result: %d",digit_sum(num));
    return 0;
}