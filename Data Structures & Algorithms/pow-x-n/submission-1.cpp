class Solution {
public:
    double rpow(double x,int n){
        if(n == 0) return 1;
        int dob = x * x;
       // int dobo = x * x * x;
        int cp = n/2;

        double res = rpow(x,n/2);

        return (n % 2 == 0) ? res * res : x * res * res;
        

    }
    double myPow(double x, int n) {
        if(x == 0) return 0;
        if(n == 1) return x;
        double res = rpow(x,n);
        if(n < 0) return 1/res;
        return res;
    }
};
