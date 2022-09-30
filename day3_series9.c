#include <stdio.h>
//https://practice.geeksforgeeks.org/problems/pattern-printing1347/1

int main()
{
    int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf(" ");
    }
    return 0;
}
/*
Pattern Printing
SchoolAccuracy: 65.81%Submissions: 2894Points: 0
Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with increasing order and difference being 1.

Example 1:

Input:
N = 3
Output:
* ** ***
Explanation:
First, print 1 asterisk then space after
that print 2 asterisk and space after that
print 3 asterisk now stop as N is 3.

//User function Template for C++
class Solution
{
public:
    void printPattern(int N)
    {
        // Write Your Code here
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                printf("*");
            }
            printf(" ");
        }
    }
};

*/