
/*
Print Pattern
EasyAccuracy: 60.15%Submissions: 9392Points: 2
Print a sequence of numbers starting with N where A[0] = N, without using loop, in which  A[i+1] = A[i] - 5,  until A[i] > 0. After that A[i+1] = A[i] + 5  repeat it until A[i] = N.

Example 1:

Input: N = 16
Output: 16 11 6 1 -4 1 6 11 16
Explaination: The value decreases until it
is greater than 0. After that it increases
and stops when it becomes 16 again.

// User function Template for C++

class Solution{
public:
    vector<int> a;

    void solve(int num,int original,int c)
    {
        a.push_back(num);

        if (num==original && c==1)
        {
            return ;
        }
        else if (num>0 && c!=1)
            solve(num-5,original,0);
        else
        {
            solve(num+5,original,1);
        }
    }
    vector<int> pattern(int N){
        // code here

        solve(N,N,0);


        return a;
    }
};
*/
