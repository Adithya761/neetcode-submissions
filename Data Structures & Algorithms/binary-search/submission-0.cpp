class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        auto rb = upper_bound(nums.begin(),nums.end(),target);
        if(lb == rb) return -1;
        //cout << it.first;
        return lb - nums.begin();
    }
};
