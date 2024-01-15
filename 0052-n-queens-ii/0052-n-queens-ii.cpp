class Solution {
public:
    bool isSafe(int row,int col,vector<string> &board,int n)
    {
        int r = row,c = col;
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        for(int i = 0;i < c;i++)
        {
            if(board[r][i] == 'Q') return false;
        }
        row = r,col = c;
        while(row < n && col >= 0)
        {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void fun(int col,vector<string> &board,int &ans,int n)
    {
        if(col == n) 
        {
            ans++;
            return;
        }
        for(int i = 0;i < n;i++)
        {
            if(isSafe(i,col,board,n))
            {
                board[i][col] = 'Q';
                fun(col+1,board,ans,n);
                board[i][col] = '.';
            }
        }
    }
    int totalNQueens(int n) 
    {
        int ans = 0;
        vector<string> board(n);
        string s(n,'.');
        for(int i = 0;i < n;i++)
        {
            board[i] = s;
        }
        fun(0,board,ans,n);
        return ans;   
    }
};