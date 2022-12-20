#include <stdio.h>
#include <string.h>
//Program for comparing two strings (User defined function)

int number(char s)
{
    if (s>='A' && s<='Z')
        return s-'A';
    else
        return s-'a';
}
int compare(char *s1,char *s2)
{
    int i=-1,j=-1;
    while (s1[++i]!='\0' && s2[++j]!='\0')
    {
        // int cmp=number(s2[j])-number(s1[i]);
        int cmp=s2[j]-s1[i];
        // printf("\ncmp: %d ",cmp);
        if (cmp<0)
            return 1;
        else if (cmp>0)
            return -1;
    }
    return 0;
}

int main()
{
    char str1[100],str2[100];
    printf("ENTER FIRST STRING:");
    gets(str1);

    printf("ENTER SECOND STRING:");
    fflush(stdin);
    gets(str2);

    // printf("\nOn comparison we get: %d",strcmp(str1,str2));
    printf("\nOn comparison: %d",compare(str1,str2));
}