class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
         int n = h.size();
        vector<int> prev(n);
        vector<int> next(n);
        stack<int> st1;
        stack<int> st2;

        for(int i = 0;i < n;i++){
            while(!st1.empty() && h[st1.top()] >= h[i]){
                st1.pop();
            }
            if(st1.empty()){
                prev[i] = -1;
            }
            if(!st1.empty()){
                prev[i] = st1.top();
            }
            st1.push(i);
        }
        for(int i = n -1;i >= 0;i--){
            while(!st2.empty() && h[st2.top()] >= h[i]){
                st2.pop();
            }
            if(st2.empty()){
                next[i] = n;
            }
            if(!st2.empty()){
                next[i] = st2.top();
            }
            st2.push(i);
        }
        int ma = 0;
        for(int i = 0;i < n;i++){
            ma = max(ma,(next[i] - prev[i] -1) * h[i]);
        }
        return ma;
    }
};
