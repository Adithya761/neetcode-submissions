class Solution {
public:
    vector<vector<string>> ans;
    unordered_set<int> col;
    unordered_set<int> pd;
    unordered_set<int> nd;
    int x;
    void solve(vector<string>& b,int r){
        if(r == x){
            ans.push_back(b);
            return;
        }
        for(int c = 0;c < x;c++){
            if(col.count(c) || pd.count(r + c) || nd.count(r - c)){
                continue;
            }
            col.insert(c);
            pd.insert(r + c);
            nd.insert(r - c);
            b[r][c] = 'Q';
            solve(b,r + 1);
            col.erase(c);
            pd.erase(r + c);
            nd.erase(r - c);
            b[r][c] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> b(n,string(n,'.'));
        x = n;
        solve(b,0);
        return ans;
    }
};
