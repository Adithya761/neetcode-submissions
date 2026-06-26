class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
       // mp[0] = -1;
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            int val = nums[i];
            
            int req = target - val;
            if(mp.count(req)){
                return {mp[req], i};
            }
            mp[nums[i]] = i;

        }
        return {-1,-1};

    

    }
};
