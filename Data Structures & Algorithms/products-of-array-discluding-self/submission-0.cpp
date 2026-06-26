class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> lp(n);
        vector<int> rp(n);
        lp[0] = nums[0];
        rp[n-1] = nums[n-1];
        for(int i = 1;i < n-1;i++){
            lp[i] = lp[i-1] * nums[i];
            //rp[i] = rp[n-i] * nums[n- i - 1];
        }
        for(int i = n-2;i >= 1;i--){
            rp[i] = rp[i + 1] * nums[i];
        }
        vector<int> res(n);
        res[0] = rp[1];
        res[n - 1] = lp[n-2];
        for(int i = 1;i < n-1;i++){
            res[i] = lp[i - 1] * rp[i + 1];
        }
        return res;
    }
};
