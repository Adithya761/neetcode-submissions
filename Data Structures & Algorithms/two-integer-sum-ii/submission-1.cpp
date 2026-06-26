class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int le = 0;
        int ri = nums.size() -1;
        while(le < ri){
            int sum = nums[le] + nums[ri];
            if(sum == target){
                return {le + 1,ri + 1};
            }
            else if(sum < target){
                le++;
            }
            else{
                ri--;
            }
        }
        return {-1,-1};
    }
};
