#include <stdio.h>
// lcm of two numbers

int lcm(int a, int b, int k)
{
    if (a % b == 0)
    {
        return a;
    }
    else if (a==1 || b==1)
    {
        return a*b;
    }
    if (k <= b)
    {
        if (a % k == 0 && b % k == 0)
        {
            return k*lcm(a / k, b / k, 2);
        }
        else
        {
            return lcm(a, b, k + 1);
        }
    }
    else
    {
        return a * b;
    }
}

int main()
{
    int a = 16, b = 98, l;
    printf("ANY TO NUMBERS TO CALCULATE THEIR LCM:");
    scanf("%d%d",&a,&b);
    l = lcm(a, b, 2);
    printf("%d ", l);
    return 0;
}