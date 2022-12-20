#include <stdio.h>
//Program for reversing the given string (User defined function)
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(char *s)
{
    int len=0,i,mid;
    while(s[len++]!='\0');
    len--;

    mid=len/2;
    for(i=0;i<mid;i++)
        swap(&s[i],&s[len-1-i]);
}

int main()
{
    char str[50];
    printf("ENTER ANY STRING:");
    gets(str);
    printf("\nString before reversing: %s",str);

    reverse(str);

    printf("\nString after reversing: %s",str);
    return 0;
}