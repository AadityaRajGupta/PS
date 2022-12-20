#include <stdio.h>
// Program for finding all suffixes of a string

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

    printf("\nALL SUFFIXES OF A GIVEN STRING ARE:\n");
    for(int i=1;i<size;i++)
    {
        // for(int j=size-1;j>size-1-i;j--)
        for(int j=i;j<size;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}

