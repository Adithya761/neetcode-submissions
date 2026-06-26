class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mp = 0;
        int buy = p[0];
        for(int i = 1;i < p.size();i++){
            buy = min(buy,p[i]);

            int sell = p[i] - buy;
            mp = max(mp,sell);
        }
        return mp;
        
    }
};
