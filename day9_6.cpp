// Self Dividing Numbers
//https://leetcode.com/problems/self-dividing-numbers/submissions/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            int n=i;
            while(n!=0)
            {
                int r=n%10;
                if (r==0)
                {
                    break;
                }
                if(i%r!=0)
                {
                    break;
                }
                else
                {
                    n=n/10;
                }
            }
            if (n==0)
                ans.push_back(i);
        }
        return ans;
    }
};