class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> res;
        for(auto &word : strs){
           string sortedS = word;
           sort(sortedS.begin(),sortedS.end());
           mp[sortedS].push_back(word);
        }
        for(auto it: mp){
            res.push_back(it.second);
        }
        return res;
    }
};
