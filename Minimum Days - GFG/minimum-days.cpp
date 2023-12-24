//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int n,string &s, vector<int> &P) {
        int cnt = 0, ind = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1] && s[i] != '?') {
                while (ind < n) {
                    s[P[ind]] = '?';
                    //cout << P[ind] << " " << i << endl;
                    ind++;
                    cnt++;
    
                    // Break the loop when the current index is used in replacement
                    if(P[ind-1] == i || P[ind-1] == i+1) break;
                }
            }
        }
        //cout << s << endl;
        return cnt;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends