#include <stdio.h>
#include <string.h>
// Sort the Given city names in dictionary order

// -1==> string 1 upar;

#define size 5

int compare(char *s1,char*s2)
{
    int i=-1,j=-1;
    while(s1[++i]!='\0' && s2[++j]!='\0')
    {
        int cmp=s2[j]-s1[i];
        if (cmp<0)
            return 1;
        else if (cmp>0)
            return -1;
    }
    return 0;
}
void copy(char *s1,char*s2)
{
    int i=-1;
    while(s2[++i]!='\0')
        s1[i]=s2[i];
    s1[i]='\0';
}
void swap(char *a,char *b)
{
    char s[100];
    copy(s,a);
    copy(a,b);
    copy(b,s);
}

int main()
{
    char str[size][100];
    int i,j;

    printf("\nENTER ANY %d CITIES NAME:\n",size);
    for(i=0;i<size;i++)
        gets(str[i]);
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (compare(str[i],str[j]) > 0)
            {
                swap(str[i],str[j]);

                // copy(s,str[i]);
                // copy(str[i],str[j]);
                // copy(str[j],s);
            }
        }
    }

    printf("\n\nCITY NAMES IN DICTIONARY ORDER:\n");
    for(i=0;i<size;i++)
        puts(str[i]);

    return 0;
}