class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            totalSum -= nums[i];
            int m = (n - i - 1);

            if (m > 0) {
                int avg = totalSum / m;
                if (nums[i] > avg) {
                    count++;
                }
            }
        }

        return count;
    }
};