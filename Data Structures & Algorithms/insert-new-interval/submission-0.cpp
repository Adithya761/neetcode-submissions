class Solution {
   public:
    vector<vector<int>> insert(vector<vector<int>>& itv, vector<int>& nit) {
        vector<vector<int>> res;
        itv.push_back(nit);

        sort(itv.begin(), itv.end());
        res.push_back(itv[0]);
        for (int i = 1; i < itv.size(); i++) {
            if (res.back()[1] >= itv[i][0]) {
                int val = res.back()[1];
                res.back()[1] = max(val, itv[i][1]);
            } else {
                res.push_back(itv[i]);
            }
        }
        return res;
    }
};
