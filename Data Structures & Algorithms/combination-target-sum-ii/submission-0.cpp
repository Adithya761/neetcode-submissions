class Solution {
public:
    vector<vector<int>> res;
    int n;
    void solve(vector<int>& c,vector<int>& list, int t,int idx){
        if(t == 0){
            res.push_back(list);
            return;
        }
        if(idx == n || t < 0) return;
        list.push_back(c[idx]);
        solve(c,list,t - c[idx],idx + 1);
        list.pop_back();
        int j = idx + 1;
        while(j < n && c[j] == c[j - 1]){
            j++;
        }
        solve(c,list,t,j);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<int> list;
        n = c.size();
        sort(c.begin(),c.end());
        solve(c,list,t,0);
        return res;
    }
};
