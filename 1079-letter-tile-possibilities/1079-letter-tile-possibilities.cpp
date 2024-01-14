class Solution {
public:
    void fun(int ind,string &st,string &tiles,unordered_set<string> &ans)
    {
        if(ind == tiles.size()){
            if(st.size() > 0){
                ans.insert(st);
            }
            return;
        }
        for(int i = ind;i < tiles.size();i++)
        {
            st.push_back(tiles[i]);
            swap(tiles[i],tiles[ind]);
            fun(ind+1,st,tiles,ans);
            st.pop_back();
            swap(tiles[i],tiles[ind]);
        }
        fun(ind+1,st,tiles,ans);
    }
    int numTilePossibilities(string tiles) {
        int ind = 0;
        unordered_set<string> ans;
        string st = "";

        fun(ind,st,tiles,ans);
        return ans.size();
    }
};