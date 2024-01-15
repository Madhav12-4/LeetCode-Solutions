class Solution {
public:
    void fun(int ind,vector<int> &v,vector<int> &nums,vector<vector<int>> &ans)
    {
        ans.push_back(v);
        for(int i = ind;i < nums.size();i++)
        {
            if(i > ind && nums[i] == nums[i-1]) continue;
            v.push_back(nums[i]);
            fun(i+1,v,nums,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        fun(0,v,nums,ans);
        return ans;

    }
};