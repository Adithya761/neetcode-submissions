class Solution {
public:
    string builtStr(string s){
        string res;
        for(int i = 0;i < s.length();i++){
            if(s[i] == ' '){
                continue;
            }
            else if(isalnum(s[i])){
                res += tolower(s[i]);
            }
        }
        cout << res;
        return res;
    }
    bool isPalindrome(string s) {
        string res = builtStr(s);
        int le = 0;
        int ri = res.length() - 1;
        while(le < ri){
            if(res[le] != res[ri]){
                return false;
            }
            le++;
            ri--;
        }
        return true;
    }
};
