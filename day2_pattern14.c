/*
Problem
Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

Example:
1) Input : n=3
Output:
***
 *
***

2) Input n=4
Output:
****
  *
 *
****
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN      // Writing output to STDOUT

	for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == num - 1)
        {
            for (int j = 0; j < num; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = num-i-1; j > 0; j--)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
	return 0;
}



*/