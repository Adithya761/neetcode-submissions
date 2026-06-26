class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int l = 0;
        int ml = 0;
        int mf = 0;
        for(int r = 0;r < s.size();r++){
            mp[s[r]]++;
            mf = max(mf,mp[s[r]]);
            if((r - l + 1) - mf > k){
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
            ml = max(ml,r - l + 1);
        }
        return ml;
    }
};
