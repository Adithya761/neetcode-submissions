class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map <char,int> mp;
        int cnt = 0;
        for(auto &it : t){
            mp[it]++;
            cnt++;
        }
        int st = 0;
        int l = 0;
        int d = INT_MAX;
        string res = "";
        for(int r = 0;r < s.size();r++){
            if(mp[s[r]] --> 0){
                cnt--;
            }
            while(cnt == 0){
                if((r - l + 1) < d){
                    d = r - l + 1;
                    st = l;
                }
                if(mp[s[l]]++ == 0){
                    cnt++;
                }
                l++;
            }
        }
        return d == INT_MAX ? "" : s.substr(st,d);
    }
};
