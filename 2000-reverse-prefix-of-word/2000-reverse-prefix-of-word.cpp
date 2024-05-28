class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n = s.size();
        stack<char> st;

        int ind = n;
        for(int i = 0;i < n;i++)
        {
            st.push(s[i]);
            if(s[i] == ch)
            {
                ind = min(i,ind);
                break;
            }
        }
        if(ind == n)
            return s;
        reverse(s.begin(),s.begin() + ind+1);
        return s;


    }
};