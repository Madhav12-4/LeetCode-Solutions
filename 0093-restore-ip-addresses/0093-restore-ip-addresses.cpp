class Solution {
public:
    void fun(int ind,int cnt,string st,string &s,vector<string> &ans)
    {
        int n = s.length();
        if(cnt > 4) return;
        if(ind == n && cnt == 4)
        {
            st.pop_back();
            ans.push_back(st);
            return;
        }
        else if(cnt == 4) return;
        for(int i =1;i <= 3 && ind + i <= n;i++)
        {
            string temp = s.substr(ind,i);
            if(i != 1 && temp[0] == '0') break;
            else if(255 >= stoi(temp))
            {
                fun(ind + i,cnt+1,st + temp + '.',s,ans);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) 
    {
        int cnt = 0;
        vector<string> ans;
        string st;
        fun(0,0,"",s,ans);
        return ans;
    }
};