class Solution {
public:
    bool validDigit(int n, int x) {
        int t = 0, f = 0;
        while (n > 0) {
            int digit = 0;

            if(n < 10 && n != x) {
                f = 1;
            }

            digit = n % 10;
            if (digit == x) {
                t++;
            }

            n/=10;
        }

        return t && f;
    }
};