class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size(),ans = 0;
        sort(nums.begin(),nums.end());
        int mid;
        if(n&1)
            mid = n/2;
        else
            mid = (n+1)/2;
        for(auto it: nums)
        {
            ans += abs(nums[mid]-it);
        }
        return ans;
    }
};