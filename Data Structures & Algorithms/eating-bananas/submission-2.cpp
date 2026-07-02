class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int mxi = *max_element(p.begin(),p.end());

        int le = 1;
        int ri = mxi;
        int res = mxi;
        while(le <= ri){
            int k = le + (ri - le)/2;
            long long tot = 0;
            for (int x : p) {
                tot += ceil(static_cast<double>(x) / k);
            }
            if(tot <= h){
                res = k;
               ri = k - 1;
            }
            else{
                le = k + 1;
            }
        }
        return res;
    }
};
