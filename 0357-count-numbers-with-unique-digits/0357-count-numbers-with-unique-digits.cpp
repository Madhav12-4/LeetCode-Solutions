class Solution {
public:
    int fun(int n)
    {
        if(n == 0) return 1;
        if(n == 1) return 10;
        int k = n-1,d = 9,ans = 9;
        while(k)
        {
            ans *= d;
            d--;
            k--;
        }
        return ans + fun(n-1);
    }
    int countNumbersWithUniqueDigits(int n) 
    {
        int ans = fun(n);
        return ans;
    }
};