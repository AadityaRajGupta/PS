#include <stdio.h>
//Factorial of a number using tail recursion
//tail recursion: jisme last step ke baad calculation nhi hota

int fact(int n,int k)
{
    if (n==0)
    {
        return k;
    }
    return fact(n-1,n*k);
}
int main()
{
    int num=5;
    int f=fact(num,1);
    printf("FACTORIAL OF NUMBER[%d] IS: %d",num,f);
    return 0;
}