class Solution {
public:
    vector<string> res;
    int ml;
    int m;
    void solve(string s,int idx,int open,int close){
        if(open == close && s.size() == ml){
            res.push_back(s);
            return;
        }
        if(open < m){
            solve(s + '(',idx + 1,open + 1,close);
        }
        if(close < open){
            solve(s + ')',idx +1 ,open,close + 1);
        }

    }
    vector<string> generateParenthesis(int n) {
        m = n;
        ml = n * 2;
        string s;
        solve(s,0,0,0);
        return res;
    }
};
