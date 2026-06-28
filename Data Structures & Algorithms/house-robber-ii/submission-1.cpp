class Solution {
public:
    int count(int ind, vector<int>& nums, vector<int>& dp){
        if(ind >= nums.size()) return 0;
        if(dp[ind] != -1) return dp[ind];

        int take = nums[ind] + count(ind + 2, nums, dp);
        int notTake = count(ind + 1, nums, dp);
        return dp[ind] = max(take, notTake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> n1(nums.begin() + 1, nums.end());  
        vector<int> n2(nums.begin(), nums.end() - 1);   

        vector<int> dp1(n1.size(), -1);
        vector<int> dp2(n2.size(), -1);

        int rb1 = count(0, n1, dp1);
        int rb2 = count(0, n2, dp2);

        return max(rb1, rb2);
    }
};
