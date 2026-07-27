class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int arrSum = 0, maxSum = INT_MIN;

        for (int i : nums) {
            arrSum += i;
            maxSum = max(arrSum, maxSum);

            if (arrSum < 0) {
                arrSum = 0;
            }
        }

        return maxSum;
    }
};