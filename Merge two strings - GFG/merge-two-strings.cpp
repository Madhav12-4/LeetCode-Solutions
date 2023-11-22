//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string s1, string s2)
{
    int n1 = s1.size(),n2 = s2.size();
    int i = 0,j = 0;
    string st;
    bool flag = true;
    while(i < n1 && j < n2){
        if(flag){
            st += s1[i];
            i++;
            flag = false;
        }
        else{
            st += s2[j];
            j++;
            flag = true;
        }
    }
    while(i < n1){
        st += s1[i];
        i++;
    }
    while(j < n2){
        st += s2[j];
        j++;
    }
    return st;
}