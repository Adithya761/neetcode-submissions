class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

       map<int,int> mp;
       for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
       }
       for(auto &it : mp){
            int freq = it.second;
            int val = it.first;
            pq.push({freq,val});
            if(pq.size() > k){
                pq.pop();
            }
       }
       vector<int> res;
       while(!pq.empty()){
            int val = pq.top().second;
            pq.pop();
            res.push_back(val);
       }
       return res;

    }
};
