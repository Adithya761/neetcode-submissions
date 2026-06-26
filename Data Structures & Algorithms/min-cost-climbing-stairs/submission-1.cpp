class Solution {
public:
    int count(int ind,vector<int>& cost,vector<int>& dp){
        if(ind >= cost.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        int ostep = cost[ind] + count(ind + 1,cost,dp);
        int tstep = cost[ind] + count(ind + 2,cost,dp);
        

        return dp[ind] = min(ostep,tstep);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1,-1);
        int s0 = count(0,cost,dp);
        int s1 = count(1,cost,dp);
        cout << s0 << s1;
        return min(s0,s1);
    }
};
