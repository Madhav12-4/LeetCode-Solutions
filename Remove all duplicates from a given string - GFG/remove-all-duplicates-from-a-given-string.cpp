//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    int n = str.size();
	    unordered_set<char> s;
	    for(auto c : str){
	        s.insert(c);
	    }
	    string temp;
	    for(int i = 0;i < n;i++){
	        if(s.find(str[i]) != s.end()){
	            temp += str[i];
	            s.erase(str[i]);
	        }
	    }
	    return temp;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends