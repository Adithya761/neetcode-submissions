/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& itv) {
        sort(itv.begin(),itv.end(),[](auto &x,auto &y){
            return x.start < y.start;
        });
        priority_queue<int,vector<int>,greater<>> pq;
        for(const auto& it : itv){
            if(!pq.empty() && pq.top() <= it.start){
                pq.pop();
            }
            pq.push(it.end);
        }
        return pq.size();
    }
};
