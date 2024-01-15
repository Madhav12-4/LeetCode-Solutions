class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        int n = words.size(),k = s.length();
        string st;
        for(int i = 0;i < n;i++)
        {
            st += words[i];
            if(st == s) return 1;
        }
        return 0;
    }
};