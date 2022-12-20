//https://practice.geeksforgeeks.org/problems/find-n-th-term-in-the-series3926/1?category%5B%5D=Mathematical&category%5B%5D=Mathematical&page=1&query=category%5B%5DMathematicalpage1category%5B%5DMathematical
// Find N-th term in the series

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int series(long long int k){
        // code here
        if (k==0)
        {
            return 9;
        }
        else
        {
            k--;
            return (16*k+24+series(k));
        }
    }
    long long int nthOfSeries(long long int n){
        // code here
        n--;
        return series(n);
        
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}