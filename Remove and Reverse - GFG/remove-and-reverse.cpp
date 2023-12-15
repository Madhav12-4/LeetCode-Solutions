//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        int n = s.length();
        unordered_map<char,int> mp;
        for(int i = 0;i < n;i++) mp[s[i]]++;
        int i = 0,j = n-1,cnt = 0;
        
        while(i < j){
            while(i < j && mp[s[i]] == 1) i++;
            if(mp[s[i]] > 1){
                mp[s[i]]--;
                s[i] = '#';
                cnt++;
            }
            while(i < j && mp[s[j]] == 1) j--;
            if(mp[s[j]] > 1){
                mp[s[j]]--;
                s[j] = '#';
                cnt++;
            }
            i++;j--;
        }
        string st;
        for(auto it : s){
            if(it != '#') st += it;
        }
        if(cnt&1) {
            reverse(st.begin(),st.end());
            return st;
        }
        else{
            return st;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends