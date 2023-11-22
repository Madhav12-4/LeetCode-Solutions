//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> v(26,0);
        int maxi = 0;
        for(int i = 0;i < str.size();i++){
            v[str[i] - 'a']++;
            maxi = max(maxi,v[str[i] - 'a']);
        }
        
        for(int i = 0;i < 26;i++){
            if(v[i] == maxi){
                return (i + 'a');
            }
        }
        return 'z';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends