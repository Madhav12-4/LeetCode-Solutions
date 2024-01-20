class Solution {
public:
    bool isValid(int r,int c,int n,int m)
    {
        if(r < 0 || r >= n || c < 0 || c >= m) return false;
        return true;
    }
    bool fun(int ind,int r,int c,vector<vector<char>>& board,string word,vector<vector<bool>> &vis)
    {
        if(ind == word.size())
        {
            return true;
        }
        int dr[4] = {0,-1,0,1};
        int dc[4] = {-1,0,1,0};
        for(int k = 0;k < 4;k++)
        {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if(isValid(nr,nc,board.size(),board[0].size()) && word[ind] == board[nr][nc] && vis[nr][nc] == 0)
            {
                vis[nr][nc] = 1;
                if(fun(ind+1,nr,nc,board,word,vis)) return true;
                else vis[nr][nc] = 0;
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        int n = board.size(),m = board[0].size();
        vector<vector<bool>> vis(n,vector<bool> (m,0));
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < m;j++)
            {
                if(board[i][j] == word[0]) 
                {
                    vis[i][j] = 1;
                    if(fun(1,i,j,board,word,vis)) return true;
                    vis[i][j] = 0;
                }
            }
        }
        return false;
    }
};