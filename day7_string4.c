#include <stdio.h>
//Program for finding word count in the Paragraph

int main()
{
    char str[500],word[100];
    printf("ENTER ANY PARAGRAPH:");
    gets(str);
    printf("ENTER WORD TO BE FIND:");
    fflush(stdin);
    gets(word);
    
    int len=0;
    while(str[len++]!='\0');
    len--;

    int len_word=0;
    while(word[len_word++]!='\0');
    len_word--;

    printf("%d %d",len,len_word);

    int i=0,j=0,count=0;
    for (i=0;i<len;i++)
    {
        // count=0;
        j=0;
        while (str[i]==word[j] && word[j]!='\0' && str[i]!='\0')
        {
            i++;
            j++;
        }
        if (j==len_word)
            count++;
    }
    printf("Word [%s] count in given paragraph is [%d]",word,count);
    return 0;
}
