class Solution {
public:
    string getPermutation(int n, int k) 
    {
        vector<int> nums;
        int fact = 1;
        for(int i = 1; i< n;i++)
        {
            nums.push_back(i);
            fact = fact*i;
        }
        nums.push_back(n);
        string s;
        k = k-1;
        while(true)
        {
            char c = '0' + nums[k/fact];
            s.push_back(c);
            nums.erase(nums.begin() + k/fact);
            if(nums.size() == 0) break;
            k = k%fact;
            fact/=nums.size();
        }
        return s;
        
    }
};