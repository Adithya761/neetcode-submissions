class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for(int i = 0;i < 32;i++){
            int bit = ((n >> i) & 1);
            int mask = (1 << (31 - i));
            if(bit == 1){
                res |= mask;
            }
        } 
        return res;
    }
};
