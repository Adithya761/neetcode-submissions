class Solution {
public:
    vector<vector<int>> res;
    void count(int ind ,vector<int>& nums,vector<int>& list){
        if(ind == nums.size()){
            res.push_back(list);
            return;
        }
        list.push_back(nums[ind]);
        count(ind + 1,nums,list);
        list.pop_back();
        count(ind + 1,nums,list);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> list;
        count(0,nums,list);

        return res;
    }
};
