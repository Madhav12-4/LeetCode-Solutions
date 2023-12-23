//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string s)
{
    int n = s.length();
    bool flag1 = 0,flag2 = 1;
    string st1 = "",st2 = "";
    for(int i = 0;i < n;i++){
        if(flag1 == 0){
            st1 += '0';
            flag1 = 1;
        }
        else if(flag1 == 1){
            st1 += '1';
            flag1 = 0;
        }
        if(flag2 == 0){
            st2 += '0';
            flag2 = 1;
        }
        else {
            st2 += '1';
            flag2 = 0;
        }
    }
    // cout<<st1<<endl;
    // cout<<st2<<endl;
    int diff1 = 0,diff2 = 0;
    for(int i = 0;i < n;i++){
        if(st1[i] != s[i]){
            diff1++;
        }
        if(st2[i] != s[i]){
            diff2++;
        }
    }
    return min(diff1,diff2);
}