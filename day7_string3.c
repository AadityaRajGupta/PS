#include <stdio.h>
//Program for finding if the given string is a palindrome

int main()
{
    char str[50];
    gets(str);
    int len=0,i,mid,flag=0;
    while(str[len++]!='\0');
    len--;

    mid=len/2;
    for(i=0;i<mid;i++)
    {
        if (str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
    return 0;
}