#include <stdio.h>
// Program to find if the given string is a valid C language identifier

/*
*   not start with number && no space in starting
*   no special character in between except underscore
*   identifier should not be keywords
*/
int compare(char *s1,char *s2)
{
    int i=-1,j=-1;
    while (s1[++i]!='\0' && s2[++j]!='\0')
        if ((s2[j]-s1[i])!=0)
            return 1;
    return 0;
}
int keywords_compare(char *s)
{
    int check=0;
    
    check=check+compare(s,"main");
    check=check+compare(s,"return");

    check=check+compare(s,"if");
    check=check+compare(s,"else");
    check=check+compare(s,"while");
    check=check+compare(s,"for");

    check=check+compare(s,"switch");
    check=check+compare(s,"case");
    check=check+compare(s,"struct");

    check=check+compare(s,"int");
    check=check+compare(s,"char");
    check=check+compare(s,"float");
    check=check+compare(s,"double");
    check=check+compare(s,"long");
    check=check+compare(s,"unsigned");

    check=check+compare(s,"continue");
    check=check+compare(s,"break");
    check=check+compare(s,"goto");

    if (check!=18)
        return 0;
    
    return 1;
}
int is_number_or_alphabet(char s)
{
    if ( (s>='1' && s<='9') || (s>='A' && s<='Z') || (s>='a' && s<='z') || s=='_')
        return 1;
    return 0;
}
int check(char *s)
{
    int i;
    if (!keywords_compare(s))
        return 0;
    printf("\n1.KEYWORD CHECK PASS\n");
    if (s[0]=='_' || (s[0]>='A' && s[0]<='Z') || (s[0]>='a' && s[0]<='z'))
    {
        printf("2.INDEX ZERO CHECK\n");
        i=1;
        while(s[i]!='\0')
        {
            if (!is_number_or_alphabet(s[i]))
                return 0;
            i++;
        }
        printf("3.WHOLE STRING CHECK\n");
        return 1;
    }
    return 0;
}

int main()
{
    char str[100];
    printf("ENTER ANY IDENTIFIER NAME WANT TO USE:");
    gets(str);
    // scanf("%[^\n]*c",str);

    int val=check(str);
    (val==0) ? printf("\nNot valid Identifier Name") : printf("\nValid Indentifier Name");
    return 0;
}