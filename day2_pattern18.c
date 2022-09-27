/*
Triangle shrinking downwards
SchoolAccuracy: 79.98%Submissions: 2487Points: 0
Given a string of a constant length, print a triangle out of it. The triangle should start with the given string and keeps shrinking downwards by removing one character from the begining of the string. The spaces on the left side of the triangle should be replaced with dot character.



Example 1:

Input:
S = Geeks
Output:
Geeks
.eeks
..eks
...ks
....s

class Solution {
  public:
    string triDownwards(string S) {
        // code here
        string ans = "";
        for(int  i=0;i<S.length();i++)
        {
            for(int j=0;j<S.length();j++)
            {
                if(j>=i) ans+=(S.substr(j,1));
                else   ans+=(".");
            }
        }
        return ans;

    }
};*/