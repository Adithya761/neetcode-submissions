class Solution {
public:
    vector<vector<int>> res;
    void count(int ind,vector<int>& nums, int target,vector<int>& list){
        if(ind >= nums.size() || target < 0) return;
        if(target == 0){
            res.push_back(list);
            return;
        }
        list.push_back(nums[ind]);
        count(ind,nums,target - nums[ind],list);
        list.pop_back();
        count(ind + 1,nums,target,list);
       
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> list;
        count(0,nums,target,list);

        return res;
    }
};
