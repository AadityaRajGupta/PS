#include <stdio.h>
// Program for finding all prefixes of a string
int len(char *s)
{
    int i=0;
    while(s[i++]!='\0');
    return --i;
}

int main()
{
    char str[100];
    printf("ENTER ANY STRING:");
    gets(str);

    int size=len(str);

    printf("\nALL PREFIXES OF A GIVEN STRING:");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<i;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}

