class Solution {
public:
    int count(int ind,vector<int>& nums,vector<int>& dp){
        if(ind >= nums.size()) return 0;

        if(dp[ind] != -1) return dp[ind];

        int take = nums[ind] + count(ind + 2,nums,dp);
        int notTake = count(ind + 1,nums,dp);
        return dp[ind] = max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n  = nums.size();
        vector<int> dp(n ,-1);
        return count(0,nums,dp);
    }
};
