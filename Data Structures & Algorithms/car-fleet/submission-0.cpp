class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
          vector<pair<int, int>> vec;
        for(int i = 0;i < p.size();i++){
            vec.push_back({p[i],s[i]});
        }
       

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });

        stack<double> st;

        for (auto &it : vec) {
            int cp = it.first;
            int cs = it.second;

            double time = (double)(target - cp) / cs;

            if (st.empty()) {
                st.push(time);
            }
            else if (time > st.top()) {
                st.push(time);
            }
        }

        return st.size();
    }
};
