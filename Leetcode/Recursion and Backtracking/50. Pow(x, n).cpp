class Solution {
public:
    double power(double x, int n) {
        if (n == 0) {
            return 1;
        }
        double ans = power(x, n / 2);
        if (n % 2) {
            return ans * ans * x;
        }
        return ans * ans;
    }
    
    double myPow(double x, int n) {
        if (n < 0) {
            return 1 / (double) power(x, n);
        }
        return power(x, n);
    }
};
