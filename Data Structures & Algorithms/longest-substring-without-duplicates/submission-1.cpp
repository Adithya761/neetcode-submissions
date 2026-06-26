class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int l = 0;
        int maxlen = 0;
        for(int r= 0; r < s.size();r++){
            mp[s[r]]++;
            if(mp[s[r]] > 1){
                while(mp[s[r]] > 1){
                    mp[s[l]]--;
                    if(mp[s[l]] == 0){
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            maxlen = max(maxlen, r-l+1);
        }
        return maxlen;
    }
};
