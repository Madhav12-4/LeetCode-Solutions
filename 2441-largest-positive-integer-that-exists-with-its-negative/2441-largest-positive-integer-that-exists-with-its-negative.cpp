class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(auto it : nums)
            mp[it]++;
        int maxi = -1e9;
        for(int i = 0;i < n;i++)
        {
            if(nums[i] > maxi && mp[-nums[i]] > 0)
                maxi = max(nums[i],-nums[i]);
        }

        if(maxi == -1e9)
            return -1;
        return maxi;
    }
};