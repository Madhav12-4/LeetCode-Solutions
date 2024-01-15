class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size(),k = pref.size(),cnt = 0;
        for(int i = 0;i< n;i++)
        {
            if(words[i].length() >= k && words[i].substr(0,k) == pref) 
            {
                cnt++;
            }
        }
        return cnt;
    }
};