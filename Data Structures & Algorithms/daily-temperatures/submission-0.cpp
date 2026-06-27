class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        int n = t.size();
        vector<int> op(n,0);
        for(int i = n - 1;i>= 0;i--){
            while(!st.empty() && t[i] >= t[st.top()]){
                st.pop();
            }
            if(st.empty()){
                op[i] = 0;
            }
            if(!st.empty()){
                op[i] = st.top() - i;
            }
            st.push(i);
        }
        return op;
    }
};
