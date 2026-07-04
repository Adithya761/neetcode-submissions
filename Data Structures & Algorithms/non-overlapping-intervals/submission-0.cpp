class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& itv) {
        sort(itv.begin(),itv.end(),[](const vector<int>& a,vector<int>&b){
            return a[1] < b[1];
        });
        int n = itv.size();
        int pe = itv[0][1];
        int cnt  = 0;
        for(int i = 1;i < n;i++){
            if(itv[i][0] < pe){
                cnt++;
            }
            else{
                pe = itv[i][1];
            }
        }
        return cnt;
    }
};
