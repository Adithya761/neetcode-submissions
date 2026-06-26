class MedianFinder {
public:
    priority_queue<int> maxpq;
    priority_queue<int,vector<int>,greater<>> minpq;
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(maxpq.empty() || num <= maxpq.top()){
            maxpq.push(num);
        }
        else{
            minpq.push(num);
        }

        //minpq.push(num);
        int mins = minpq.size();
        int maxs = maxpq.size();
        if(mins + 1 < maxs){
            int val = maxpq.top();
            maxpq.pop();
            minpq.push(val);
        }
        else if(mins > maxs + 1){
            maxpq.push(minpq.top());
            minpq.pop();
        }
    }
    
    double findMedian() {
        int mis = minpq.size();
        int mas = maxpq.size();
        if(mis == mas){
            int v1 = maxpq.top();
            int v2 = minpq.top();
            double med = (v1 + v2)/2.0;
            return med;
        }
        else if(mis > mas){
            return minpq.top()/1.0;
        }
        else{
            return maxpq.top()/1.0;
        }
    }
};
