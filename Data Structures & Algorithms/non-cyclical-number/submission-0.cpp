class Solution {
    private:
    int sumOfSquares(int n) {
        int output = 0;
        while (n != 0) {
            output += (n % 10) * (n % 10);
            n /= 10;
        }
        return output;
    }
public:

    bool isHappy(int n) {
        set<long long> st;
        while(st.find(n) == st.end()){
            st.insert(n);
            n = sumOfSquares(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
};
