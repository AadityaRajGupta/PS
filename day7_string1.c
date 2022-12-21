#include <stdio.h>
// Program for finding length of a string (User defined function)

int len(char *s)
{
    int i=0;
    while(s[i++]!='\0');
    return --i;
}

int main()
{
    char str[20];
    printf("ENTER ANY STRING:");
    gets(str);
    
    printf("LENGTH OF GIVEN STRING : %d",len(str));
    return 0;
}