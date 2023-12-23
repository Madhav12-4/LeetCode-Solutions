//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string s1, string s2)
{
    int n = s1.size(),k = s2.size(),cnt = 0;
    if(n != k) return false;
    vector<int> v(26,0);
    for(int i = 0;i < n;i++){
        if(s1[i] != s2[i]){
            cnt++;
            v[s1[i]-'a']++;
            v[s2[i]-'a']--;
        }
    }
    if(cnt == 0) return 0;
    if(cnt > 2) return false;
    for(int i = 0;i < 26;i++){
        if(v[i] != 0) return false;
    }
    return true;
}