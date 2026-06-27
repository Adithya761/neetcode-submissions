class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp1;
        for(int i = 0;i < s1.size();i++) mp1[s1[i]]++;
        int cnt = 0;
        map<char,int> mp2;
        bool found = false;
        for(int r = 0;r < s1.size();r++){
            mp2[s2[r]]++;
        }
        if(mp1 == mp2){
            return true;
        }
        int l = 0;
        for(int r = s1.size();r < s2.size();r++){
            mp2[s2[r]]++;
            mp2[s2[l]]--;
            if(mp2[s2[l]] == 0) mp2.erase(s2[l]);
            l++;
            if(mp1 == mp2){
                found = true;
                break;
            }
        } 
        return found;
    }
};
