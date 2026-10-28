
class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;
        if (p < 0) p = -p;

        double ans = 1.0;

        while (p > 0) {
            if (p & 1) ans *= x;
            x *= x;
            p >>= 1;
        }

        if (n < 0) ans = 1.0 / ans;

        return ans;
    }
};
