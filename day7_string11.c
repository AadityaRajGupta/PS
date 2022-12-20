#include <stdio.h>
// Program to remove whitespace from the beginning, end, or both beginning and end, of a string

/*
ENTER ANY STRING:         hello         
STRING BEFORE REMOVED WHITESPACE:         hello         
STRING AFTER REMOVED WHITESPACE:hello
*/

int len(char *s)
{
    int i=-1;
    while(s[++i]!='\0');
    return i;
}
void from_beginning(char *s)
{
    int i=-1,j=0;
    while(s[++i]==' ');
    while(s[i]!='\0')
        s[j++]=s[i++];
    s[j]='\0';
}
void from_end(char *s)
{
    int i=len(s),j=0;
    while(s[--i]==' ');
    s[++i]='\0';
}
int main()
{
/* Uncomment this to check that space removed from end or not
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    char str[100];
    printf("ENTER ANY STRING:");
    gets(str);

    printf("\nSTRING BEFORE REMOVED WHITESPACE:%s",str);

    int size=len(str);

    from_beginning(str);
    from_end(str);

    printf("\nSTRING AFTER REMOVED WHITESPACE:%s",str);

}