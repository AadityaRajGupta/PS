#include <stdio.h>
// Write a program to find mean and median of five numbers using function
#define size 8
void print(int a[])
{
    int l;
    printf("\nARRAY ELEMENT:\n");
    printf("------");
    for (l = 1; l < size; l++)
    {
        printf("-----");
    }
    printf("\n|");
    for (int i = 0; i < size; i++)
    {
        printf("%-2d  |", a[i]);
        // printf(" %d ", a[i]);
    }
    printf("\n------");
    for (l = 1; l < size; l++)
    {
        printf("-----");
    }
    printf("\n");
}
void initialization(int a[])
{
    // printf("ENTER ELEMENTS:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}
int sum(int a[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sorting(int a[])
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main()
{
    int a[5], median,median1,median2;
    initialization(a);
    print(a);
    printf("MEAN OF GIVEN [%d] NUMBERS:%0.2f", size, (float)(sum(a) / size));

    sorting(a);
    //print(a);
    if (size % 2 == 0)
    {
        median1=(size-1)/2;
        median2=(size/2);
        printf("\nMEDIANS OF GIVEN NUMBERS:%d and %d",a[median1],a[median2]);
    }
    else
    {
        median = (size) / 2;
        printf("\nMEDIAN OF GIVEN NUMBERS:%d",a[median]);
    }
    return 0;
}