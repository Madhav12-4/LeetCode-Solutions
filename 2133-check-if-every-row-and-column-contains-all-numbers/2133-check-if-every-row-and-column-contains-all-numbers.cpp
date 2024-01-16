class Solution {
public:
    bool rowFun(int row,vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<bool> v(n+1,0);
        for(int i = 0;i < n;i++)
        {
            if(matrix[row][i] > n) return false;
            v[matrix[row][i]] = 1; 
        }
        for(int i = 1;i <= n;i++) if(v[i] ==0) return false;
        return true;
    }
    bool colFun(int col,vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<bool> v(n+1,0);
        for(int i = 0;i < n;i++)
        {
            if(matrix[i][col] > n) return false;
            v[matrix[i][col]] = 1; 
        }
        for(int i = 1;i <= n;i++) if(v[i] ==0) return false;
        return true;
    }
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for(int i = 0;i < n;i++)
        {
            if(colFun(i,matrix) == false) return false;
            if(rowFun(i,matrix) == false) return false;
        }
        return true;
    }
};