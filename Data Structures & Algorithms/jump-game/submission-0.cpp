class Solution {
public:
    bool canJump(vector<int>& nums) {
       // int l =0;
        int mr = 0;
       // int r = 0;
        for(int r = 0;r < nums.size();r++){
            if(mr < r) return false;
            mr = max(mr,r + nums[r]);
            // if(r <= mr){
            //     l = r;
            // }
        }
       // cout << mr;
        return true;
    }
};
