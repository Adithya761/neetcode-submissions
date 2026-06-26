class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;
        int n = s.size();
        for(int i = n-1;i >= 0;i--){
            pq.push(s[i]);
        }
        while(pq.size() > 1){
            //if(pq.size() == 1) break;

            int y1 = pq.top();
            pq.pop();
            int y2 = pq.top();
            pq.pop();
            if(y1 > y2){
                pq.push(y1-y2);
            }
        }
        pq.push(0);
        return pq.top();
    }
};
