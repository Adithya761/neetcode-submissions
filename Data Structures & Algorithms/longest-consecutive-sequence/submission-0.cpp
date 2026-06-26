class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        int mx = 0;
        for(int i = 0;i < nums.size() ;i++){
            int cnt = 0;
            if(!mp.count(nums[i] - 1)){
               // cnt = 1;
                int val = nums[i];
                while(mp.count(val)){
                    cnt++;
                    val++;
                }
            }
            mx = max(cnt,mx);
        }
        return mx;
    }
};
