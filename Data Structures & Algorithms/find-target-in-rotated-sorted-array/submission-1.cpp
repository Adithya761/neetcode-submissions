class Solution {
public:
    int binarySearch(vector<int>& nums, int lo, int hi, int tar) {
        auto it = lower_bound(nums.begin() + lo, nums.begin() + hi + 1, tar);
        if (it == nums.begin() + hi + 1 || *it != tar) return -1;
        return it - nums.begin();
    }

    int search(vector<int>& nums, int target) {
        int le = 0, ri = nums.size() - 1;
        while (le < ri) {
            int m = le + (ri - le) / 2;
            if (nums[m] > nums[ri]) {
                le = m + 1;
            } else {
                ri = m;
            }
        }
        int pivot = le;

        if (target >= nums[pivot] && target <= nums.back()) {
            return binarySearch(nums, pivot, nums.size() - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
