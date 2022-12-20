#include <stdio.h>
// Program for character by character frequency count

int dat[26];

int len(char *s)
{
    int i=0;
    while(s[i++]!='\0');
    return --i;
}

int main()
{
    int i;
    char str[20];
    printf("ENTER ANY STRING:");
    gets(str);
    int size = len(str);
    for (i = 0; i < size; i++)
        dat[str[i] - 'A']++;
    for (i = 0; i < 26; i++)
        if (dat[i] != 0)
            printf("\ncharacter [%c] frequency count: %d\n", i+'A',dat[i]);
    
    // for(i=0;i<size;i++)
    //     printf("\ncharacter [%c] frequency count: %d\n", str[i],dat[str[i] - 'A']);
    
    return 0;
}
