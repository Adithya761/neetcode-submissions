class Solution {
public:
    vector<vector<int>> res;
    int n;
    void solve(vector<int>& nums,int idx){
        if(idx == n){
            res.push_back(nums);
            return;
        }

        for(int l = idx;l < n;l++){
            swap(nums[idx],nums[l]);
            solve(nums,idx + 1);
            swap(nums[idx],nums[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        solve(nums,0);
        return res;
    }
};
