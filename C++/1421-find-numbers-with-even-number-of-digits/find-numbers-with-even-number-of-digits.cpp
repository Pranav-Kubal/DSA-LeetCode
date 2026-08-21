class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int digCount = 0;

            while (n > 0) {
                int digit = n % 10;
                n /= 10;
                digCount++;
            }

            if (digCount % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};