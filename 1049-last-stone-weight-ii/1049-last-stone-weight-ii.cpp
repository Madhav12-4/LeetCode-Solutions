class Solution {
public:
    int lastStoneWeightII(vector<int>& nums) {
        int n = nums.size(),sum = 0;
        for(auto it : nums) sum += it;
        vector<vector<bool>> t(n+1,vector<bool> (sum +1,false));
        for(int i = 0;i <= n;i++) t[i][0] = true;
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= sum;j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j] || t[i-1][j-nums[i-1]];
                }
                else t[i][j] = t[i-1][j];
            }
        }
        vector<int> v;
        for(int i = 0;i <= sum/2;i++){
            if(t[n][i] == true) v.push_back(i);
        }
        int mn = sum;
        for(int i = 0;i < v.size();i++){
            mn = min(mn,sum - 2*v[i]);
        }
        return mn;
    }
};