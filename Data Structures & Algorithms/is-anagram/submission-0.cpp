class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        if(s.length() != t.length()) return false;
        for(int i = 0;i < s.length();i++){
            int c1 = s[i] - 'a';
            int c2 = t[i] - 'a';
            freq[c1]++;
            freq[c2]--;
        }
        for(int i = 0;i < 26;i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};
