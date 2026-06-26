class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x != 0) {
            int digit = x % 10;
            res = res * 10 + digit;
            x /= 10;
        }
        if(res < INT_MIN || res > INT_MAX) return 0;
        return (int)res;
    }
};
