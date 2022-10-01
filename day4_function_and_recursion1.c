#include <stdio.h>
//Program to find if the given no is a palindrome

int palindrome(int num,int sum)
{
    if(num!=0)
    {
        sum=sum*10+(num%10);
        return palindrome(num/10,sum);
    }
    return sum;
}
int main()
{
    int num=15651,sum=0;
    sum=palindrome(num,sum);
    
    if(sum==num)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}