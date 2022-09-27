/*
Number Pattern
SchoolAccuracy: 60.45%Submissions: 1191Points: 0
For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N = 4.

Example 1:

Input:
N = 3
Output:
1 121 12321
Explanation:
For N = 3 we will print the 3 strings
according to the pattern.

class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        // Write Your Code here
        vector<string> ans;
        for(int i=1; i<=N; i++) {
            string s;
            for(int j=0; j<i; j++) {
                s += to_string(j+1);
            }
            for(int j=i-1; j>0; j--) {
                s += to_string(j);
            }
            ans.push_back(s);
        }
        return ans;
    }
};
*/
