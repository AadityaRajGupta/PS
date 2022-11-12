// magic square  M = n(n2+1)/2
//memset() is used to fill a block of memory with a particular value.  ==> memset(magicSquare, 0, sizeof(magicSquare));
//  first place 1 at (n/2,n-1) ==> (i-1,j+1)  if already filled than next condition ==> (i+1,j+2)
#include <stdio.h>
#define SIZE 10

void print(int a[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int magic_square(int a[][SIZE],int size)
{
    int i=size/2;
    int j=size-1;
    printf("SUM OF EACH ROW AND COLUMN : %d",(size*(size*size+1))/2);
    for(int num=1;num<=size*size;)
    {
        if (i<0)  i=size+i; else i=i%size;
        if (j<0)  j=size+j; else j=j%size;
        if (a[i][j]==0)
        {
            a[i][j]=num;
            i--;
            j++;
            num++;
        }
        else
        {
            i=i+1;
            j=j-2;
        }
    }
    return 0;
}
int main()
{
    int a[SIZE][SIZE]={0}, size;
    printf("\nENTER THE SIZE OF ARRAY:");
    scanf("%d", &size);

    magic_square(a,size);

    printf("\n\nMAGIC SQUARE:\n");
    print(a,size);
}