class Solution {
public:
    vector<vector<int>> res;
    int n;
    void solve(vector<int>& nums,vector<int>& list,int idx){
        if(idx == n){
            res.push_back(list);
            return;
        }

        list.push_back(nums[idx]);
        solve(nums,list,idx + 1);
        list.pop_back();
        int j = idx + 1;
        while(j < n && nums[j] == nums[j -1]){
            j++;
        }
        solve(nums,list,j);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> list;
        solve(nums,list,0);
        return res;
    }
};
