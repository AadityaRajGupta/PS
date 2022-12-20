#include <stdio.h>
#include <math.h>
// Given an odd-digit-number N, you need to find whether the given number is a balanced-number or not. An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all  digits to the right of the middle digit is equal. Note:- The number of digits of 1234006. is 7, i.e. odd digits. The middle digit is 4. LHS sum is 1+2+3=6, and RHS sum is 0+0+6=6.

int main()
{
    int num;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&num);

    int left=0,right=0;
    int size=log10(num)+1;
    int temp=num,i;
    for (i=0;i<(int)size/2;i++)
    {
        right=right+temp%10;
        temp=temp/10;
    }

    if (size%2!=0)
        temp=temp/10;
    
    for (i=0;i<(int)size/2;i++)
    {
        left=left+temp%10;
        temp=temp/10;
    }

    if (left==right)
        printf("\n%d IS BALANCED NUMBER",num);
    else
        printf("\n%d IS NOT BALANCED NUMBER",num);

    return 0;
}