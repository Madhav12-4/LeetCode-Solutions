class Solution {
public:
    void fun(int k,int n,string &st,vector<string> &ans,vector<bool> &vis)
    {
        ans.push_back(st);
        if(k == n) return;
        for(int i = 0;i <= 9;i++)
        {
            if(vis[i] == 0)
            {
                vis[i] = 1;
                string c = to_string(i);
                st += (c);
                fun(k+1,n,st,ans,vis);
                vis[i] = 0;
                st.pop_back();
            }
        }
    }
    int countNumbersWithUniqueDigits(int n) 
    {
        if(n == 0) return 1;
        if(n == 1) return 10;
        vector<bool> vis(10,0);
        string st = "";
        vector<string> ans;
        for(int i = 1;i <= 9;i++)
        {
            vis[i] = 1;
            string c = to_string(i);
            st += c;
            fun(1,n,st,ans,vis);
            st.pop_back();
            vis[i] = 0;
        }
        return ans.size() + 1;
    }
};