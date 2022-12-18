// Number of Steps to Reduce a Number to Zero
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int r(int num,int count[])
    {
        if (num<=0)
        {
            return count[0];
        }
        if (num%2==0)
        {
            num=num/2;
            (count[0])++;
            r(num,count);
        }
        else
        {
            num=num-1;
            (count[0])++;
            r(num,count);
        }
        return count[0];
    }
    int numberOfSteps(int num) {
        int count[1]={0};
        return (r(num,count));
        
    }
};

