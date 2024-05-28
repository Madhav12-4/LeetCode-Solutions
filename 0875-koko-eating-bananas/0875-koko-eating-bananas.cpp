class Solution {
public:
    bool fun(long long m,long long h,vector<int> &piles)
    {
        long long n = piles.size();
        long long cnt = 0;
        for(int i = 0;i < n;i++)
        {
            cnt += piles[i]/m;
            if(piles[i]%m != 0)
                cnt++;
        }
        if(cnt > h)
            return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size(),ans = 1e9;
        sort(piles.begin(),piles.end());

        long long l = 1, r = piles[n-1];

        while(l <= r)
        {
            long long m = l + (r-l)/2;
            if(fun(m,h,piles))
            {
                if(m < ans)
                    ans = m;
                r = m-1;
            }
            else 
                l = m+1;
        }
        return ans;
    }
};