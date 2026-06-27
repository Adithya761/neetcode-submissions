class Solution {
   public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int ml = 0;
        int mr = 0;
        int ma = 0;
        while (l < r) {
            ml = max(ml, h[l]);
            mr = max(mr, h[r]);

          //  ma = max(ma, min(ml, mr))
            if (ml < mr) {
                ma += ml - h[l];
                l++;

            } else {
                ma += mr - h[r];
                r--;
            }
        }
        return ma;
    }
};
