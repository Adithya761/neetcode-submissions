class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;

        vector<vector<int>> res;

        for(auto it : points){
            int x_1 = it[0];
            int y_1 = it[1];
            int dist = (x_1 * x_1) + (y_1 * y_1);
            pq.push({dist,{x_1,y_1}});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            vector<int> temp;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            temp.push_back(x);
            temp.push_back(y);
            res.push_back(temp);
            pq.pop();
        }
        return res;
    }
};
