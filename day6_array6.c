#include <stdio.h>
#include <string.h>

// Finding Anagrams:
// There are two strings. Find out which characters should be deleted such that both strings contain the same characters (May be in different Order)
int dat[26];
int main()
{
    int i;
    char str1[20];
    char str2[20];
    printf("ENTER FIRST STRING:");
    gets(str1);
    printf("ENTER SECOND STRING:");
    fflush(stdin);
    gets(str2);
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    if (n1 >= n2)
    {
        for (i = 0; i < n1; i++)
            dat[str1[i] - 'A']++;
        for (i = 0; i < n2; i++)
            dat[str2[i] - 'A']--;
        for (i = 0; i < 26; i++)
        {
            if (dat[i] == -1)
            {
                printf("\nANAGRAM NOT POSSIBLE\n");
                return 0;
            }
        }
        for (i = 0; i < 26; i++)
            if (dat[i] == 1)
                printf("\n\ncharacter [%c] should be deleted from [%s]\n\n", i+'A',str2);
    }
    else
    {
        for (i = 0; i < n2; i++)
            dat[str2[i] - 'A']++;
        for (i = 0; i < n1; i++)
            dat[str1[i] - 'A']--;
        for (i = 0; i < 26; i++)
        {
            if (dat[i] == -1)
            {
                printf("\nANAGRAM NOT POSSIBLE\n");
                return 0;
            }
        }
        for (i = 0; i < 26; i++)
            if (dat[i] == 1)
                printf("\n\ncharacter [%c] should be deleted from [%s]\n\n", i+'A',str2);
    }
    printf("\nSTRING CAN BE ANAGRAM\n\n");
    return 0;
}
