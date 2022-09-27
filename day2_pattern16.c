
/*
Print this pattern!
EasyAccuracy: 69.68%Submissions: 2006Points: 2
Given an integer N, you need to print the following pattern.

Example 1:

Input:
N = 3
Output:
33333
32223
32123
32223
33333

Explanation:
When N = 3 then there will be three boundaries.
Outer boundary contains only 3.
Middle boundary contains only 2.
And the inner boundary contains only 1.


class Solution
{
public:
    int abs(int n)
    {
        if (n>0)
            return n;
        else
            return (n*(-1));
    }
    int  max(int a,int b)
    {
        if (a>b)
            return a;
        else
            return b;
    }
    void printPattern(int N)
    {
        // Write Your Code here
        for (int i=-N+1;i<N;i++)
        {
            for(int j=-N+1;j<N;j++)
            {
                printf("%d", max(abs(i), abs(j)) + 1);
            }
            printf("\n");
        }


    }
};
*/
