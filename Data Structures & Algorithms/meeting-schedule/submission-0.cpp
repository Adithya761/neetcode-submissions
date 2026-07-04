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
    bool canAttendMeetings(vector<Interval>& itv) {
        sort(itv.begin(),itv.end(),[](auto &x ,auto &y){
            return x.start < y.start;
        });

        for(int i = 1;i < itv.size();i++){
            if(itv[i-1].end > itv[i].start){
                return false;
            }
        }
        return true;
    }
};
