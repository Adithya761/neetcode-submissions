class Solution {
public:
    vector<string> letterCombinations(string dig) {
        vector<string> dict = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(dig == "") return ans;
        queue<pair<string,int>> q;
        q.push({"",0});
        int n = dig.size();
        while(!q.empty()){
            auto [word , idx] = q.front();
            q.pop();

            if(idx == n){
                ans.push_back(word);
                continue;
            }
            if(idx > n){
                continue;
            }

            int nidx = dig[idx] - '0';
            for(const char c : dict[nidx]){
                q.push({word + c,idx + 1});
            }
        }
        return ans;
    }
};
