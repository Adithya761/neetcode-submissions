class Solution {
public:
    vector<vector<string>> ans;
    int n;
    bool isPal(string s){
        int le = 0;
        int hi = s.size() -1;
        while(le < hi){
            if(s[le] != s[hi]){
                return false;
            }
            le++;
            hi--;
        }
        return true;
    }
    void solve(string s,vector<string>& list,int idx){
        if(idx == n){
            ans.push_back(list);
            return;
        }
        string curr = "";
        for(int i = idx;i <n;i++){
            curr += s[i];
            if(isPal(curr)){
                list.push_back(curr);
                solve(s,list,i + 1);
                list.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<string> list;
        solve(s,list,0);
        return ans;
    }
};
