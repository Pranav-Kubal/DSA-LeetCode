class Solution {
public:
    int countCommas(int n) {
        // max input is 100k that means there won't be more that 1 comma

        if (n < 1000) {
            return 0;
        }

        return n - 999;
    }
};