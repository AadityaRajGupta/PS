#include <stdio.h>
// Program for concatenation of two strings (User defined function)

void concatenation(char *s1,char *s2,char *result)
{
    int i=-1,j=-1,k=0;
    while(s1[++i]!='\0')
        result[k++]=s1[i];
    while(s2[++j]!='\0')
        result[k++]=s2[j];
    result[k]='\0';
}

int main()
{
    char str1[100],str2[100],result[300];
    printf("ENTER FIRST STRING:");
    gets(str1);

    printf("ENTER SECOND STRING:");
    fflush(stdin);
    gets(str2);

    concatenation(str1,str2,result);
    printf("\nAfter concatenation: %s",result);
}