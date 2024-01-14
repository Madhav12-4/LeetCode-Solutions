class Solution {
public:
    void fun(int ind,vector<int> &v,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(ind == nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        fun(ind+1,v,nums,ans);
        v.pop_back();
        fun(ind+1,v,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int ind = 0;
        fun(ind,v,nums,ans);
        return ans;
    }
};