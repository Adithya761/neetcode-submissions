class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size() -1;
        int ml = 0;
        int mr = 0;
        int ma =0;
        while(l < r){
            ml = max(ml,h[l]);
            mr = max(mr,h[r]);

            ma = max(ma,min(ml,mr) * (r - l));
            if(ml < mr){
                l++;
            }
            else{
                r--;
            }
        }
        return ma;
    }
};
