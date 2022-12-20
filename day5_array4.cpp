//Absolute Difference of 1: Given an array arr of size n. Print all the numbers less than k and should be such that the difference between every adjacent digit should be 1 in the array. Note: Return empty list if no such number present, driver code will automatically print -1. Input: First line contains two space separated numbers N and K, Number of elements in array and value of K and 2nd line contains space separated N elements as the elements of the array A. Output: Space separated numbers which satisfy the given condition. https://practice.geeksforgeeks.org/problems/absolute-difference-11156/1

#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k)
    {
        // code here
        long long count = 0, word = 0, flag = 0;
        vector<long long> ans;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            word = arr[i];
            if (word < k && log10(word) + 1 > 1)
            {
                for (int j = 1, num = 10; j < log10(word) + 1; j++, num = num * 10)
                {
                    if (abs(word / num - word / (num * 10)) != 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    ans.push_back(word);
                }
            }
        }
        return ans;
    }
};
/*

ANUSHKA APPROACH:
=================

void absolutedifference(int a[], int n, int k)
{
    int i, temp, j = 0,b[10];
    for (i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            temp = a[i];
            if ((temp % 10) - ((temp / 10) % 10) == 1 || (temp % 10) - ((temp / 10) % 10) == -1)
            {
                b[j] = a[i];
                j++;
            }
        }
    }
    printf("the result is:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", b[i]);
    }
}
int main()
{
    int i, n, k, a[10];
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number u want to compare from\n");
    scanf("%d", &k);
    absolutedifference(a, n, k);

    return 0;
}
*/

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        auto ans=obj.getDigitDiff1AndLessK(arr,n,k);
        for(auto x:ans)
        {
            cout << x << " ";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}