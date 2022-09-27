#include <stdio.h>
// check whether an alphabet entered by the user is a vowel or a consonant.
int check_vowel_or_not()
{
    char ch;
    printf("ENTER ANY ALPHABET:");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("ENTERED ALAPHABET [%c] IS VOWEL", ch);
        break;

    default:
        printf("ENTERED ALAPHABET [%c] IS CONSONANT", ch);
        break;
    }
    return 0;
}
