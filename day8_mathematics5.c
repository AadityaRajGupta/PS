#include <stdio.h>
/*
Given a number N, print least prime factors for all numbers from 1 to N. The least prime factor of an integer N is the smallest prime number that divides it. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor). Note : 1 needs to be printed for 1.
Input: N = 6
Output: 1 2 3 2 5 2
Constraints: 2 ≤ N ≤ 1000
*/

int main()
{
    int n;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);

    int flag;
    printf("\nLEAST PRIME FACTORS FOR ALL NUMBERS FROM 1 TO %d:\n",n);
    printf("1 ");
    for(int i=2;i<=n;i++)
    {
        flag=0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                printf("%d ",j);
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }
    return 0;
}
