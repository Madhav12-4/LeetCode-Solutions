class Solution {
public:
    
    int dp[201][201];
    int solve(int sr,int sc,vector<vector<int>>&grid){
        
        if(sr>=grid.size()){
            return 0;
        }
        
        if(dp[sr][sc]!=-1){
            return dp[sr][sc];
        }
        
        int ans = 1e9;
        
        for(int j=0;j<grid.size();j++){
            if(j!=sc){
               ans = min(ans,grid[sr][j] + solve(sr+1,j,grid)); 
            }
        }
        
        return dp[sr][sc] = ans;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        
         int n = grid.size();
        
         
         // looping over columns of row 1
        
         memset(dp,-1,sizeof(dp));
        
         int mini = 1e9;
         
         for(int i=0;i<n;i++){
             // try out every column
             
             mini = min(mini,grid[0][i] + solve(1,i,grid));
         }
        
        return mini;
    }
};