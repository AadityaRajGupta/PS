#include <stdio.h>
// Program for converting all lower case letters to upper case and vice versa in the given sentence


int main()
{
    char str[500];
    printf("ENTER ANY STRING:");
    gets(str);
    
    printf("\nString before conversion: %s",str);

    int len=0;
    while(str[len++]!='\0');
    len--;

    int i=0;
    for (i=0;i<len;i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i]=(str[i]-'a')+'A';
        else if (str[i]>='A' && str[i]<='Z')
            str[i]=(str[i]-'A')+'a';        
    }
    printf("\nString after conversion: %s",str);

    return 0;
}
