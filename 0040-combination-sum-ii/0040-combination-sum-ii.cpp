class Solution {
public:
    void fun(int ind,int sum,vector<int> &v,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(sum == 0)
        {
            ans.push_back(v);
            return;
        }
        for(int i = ind;i < nums.size();i++)
        {
            if(i > ind && nums[i] == nums[i-1]) continue;
            if(nums[i] <= sum)
            {
                v.push_back(nums[i]);
                fun(i+1,sum-nums[i],v,nums,ans);
                v.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        int ind = 0;
        fun(ind,target,v,nums,ans);
        return ans;
    }
};