class Solution {
public:
    vector<int> krow = {-1,0,1,0};
    vector<int> kcol = {0,-1,0,1};

    bool dfs(int row,int col,vector<vector<char>>& b,vector<vector<int>>& vis,int idx, string w,string res){
        if(idx == w.size()){
            cout << res;
            return true;
        }
        int n = b.size();
        int m = b[0].size();
        vis[row][col] = 1;
        for(int i = 0;i < 4;i++){
            int nr = row + krow[i];
            int nc =  col + kcol[i];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                if(!vis[nr][nc] && b[nr][nc] == w[idx]){
                    res += b[nr][nc];
                    cout << res << endl;
                    if(dfs(nr,nc,b,vis,idx + 1,w,res)){
                        return true;
                    }
                }
            }
        }
        vis[row][col] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& b, string w) {
        int n = b.size();
        int m = b[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(w[0] == b[i][j]){
                    string res = "";
                    res += w;
                    if(dfs(i,j,b,vis,1,w,res)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
