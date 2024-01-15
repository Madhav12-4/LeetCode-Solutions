class Solution {
public:
    vector<string> fun(int n){
        if(n == 1) return {"0","1"};
        vector<string> temp = fun(n-1);
        vector<string> res;
        for(int i = 0;i < temp.size();i++){
            res.push_back("0" + temp[i]);
        }
        for(int i = temp.size()-1;i >= 0;i--){
            res.push_back("1" + temp[i]);
        }
        return res;
    }
    vector<int> circularPermutation(int n, int start) 
    {
        vector<string> res = fun(n);
        vector<int> ans;
        int ind;
        for(int i = 0;i < res.size();i++){
            ans.push_back(stoi(res[i],0,2));
            if(stoi(res[i],0,2) == start)
            {
                ind = i;
            } 
        }
        int k = ans.size();
        vector<int> v;
        for(int i = 0;i < k;i++)
        {
            v.push_back(ans[(ind + i)%k]);
            cout<<ans[(ind + i)%k]<<endl;
        }
        return v;
    }
};