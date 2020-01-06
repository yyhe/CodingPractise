class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0)
        {
            return 1.0 / myPow(x, -(n + 1)) / x;
        }
        else if (n == 0)
        {
            return 1;
        }
        else if (n == 1)
        {
            return x;
        }
        else if (n == -1)
        {
            return 1 / x;
        }
        else if (n & 1)
        {
            double mid = myPow(x, n / 2);
            return mid * mid * x;
        }
        else
        {
            double mid = myPow(x, n / 2);
            return mid * mid;
        }
    }
};
