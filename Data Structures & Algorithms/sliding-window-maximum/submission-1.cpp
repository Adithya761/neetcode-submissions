class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> op;
        deque<int> dq; // stores indices

        for(int i = 0; i < nums.size(); i++) {
            // Remove smaller elements from the back
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // Remove elements out of the current window
            if(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            dq.push_back(i);

            // Record the maximum for the current window
            if(i >= k - 1) {
                op.push_back(nums[dq.front()]);
            }
        }
        return op;
    }
};
