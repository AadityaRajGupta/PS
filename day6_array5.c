#include <stdio.h>
// Print Matrix in spiral form

#define size 5
void print(int a[][size])
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int spiral_loop(int a[][size])
{
    int i = 0, j = 0, loop;
    int row = size, col = size;
    while (i < row && j < col)
    {
        for (loop = j; loop < col; loop++)
            printf(" %d ", a[i][loop]);
        i++;

        for (loop = i; loop < row; loop++)
            printf(" %d ", a[loop][col - 1]);
        col--;

        if (i < row)
        {
            for (loop = col - 1; loop >= j; loop--)
                printf(" %d ", a[row - 1][loop]);
            row--;
        }

        if (j < col)
        {
            for (loop = row - 1; loop >= i; loop--)
                printf(" %d ", a[loop][j]);
            j++;
        }
    }
    return 0;
}
int spiral_recursion(int a[][size],int i,int j,int row, int col)
{
    int loop;
    if (i>=row || j>=col)
        return 0;
    
    for (loop=j;loop<col;loop++)
    {
        printf(" %d ",a[i][loop]);
    }
    for(loop=i+1;loop<row;loop++)
    {
        printf(" %d ",a[loop][col-1]);
    }

    if ((row-1)!=i)
        for(loop=col-2;loop>=j;loop--)
            printf(" %d ",a[row-1][loop]);
    
    if ((col-1)!=j)
        for(loop=row-2;loop>i;loop--)
            printf(" %d ",a[loop][j]);

    spiral_recursion(a,i+1,j+1,row-1,col-1);


}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a[size][size], i, j, num = 1;
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            a[i][j] = num++;

    printf("ORIGINAL MATRIX:\n");
    print(a);

    printf("ACCESSING ARRAY ELEMENT IS SPIRAL ORDER:\n");
    spiral_loop(a);

    printf("\nACCESSING ARRAY ELEMENT IS SPIRAL ORDER:\n");
    spiral_recursion(a,0,0,size,size);

    return 0;
}
