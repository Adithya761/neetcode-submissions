class Solution {
public:
    int count(int n,vector<int>& dp){
        if(n  < 0) return 0;
        if(n == 0) return 1;
        if(dp[n] != -1) return dp[n];
        
        int oneStep = count(n -1,dp);
        int twoStep = count(n-2,dp);

        return dp[n] = oneStep + twoStep;
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1,-1);
        return count(n,dp);
    }
};
