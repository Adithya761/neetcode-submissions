class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            if(nums[abs(nums[i]) - 1] < 0){
                int val = abs(nums[i]);
                return val;
            }

            nums[abs(nums[i]) - 1] *= -1;
        }
        return -1;
    }
};
