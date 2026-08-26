class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0, totalSum = 0;

        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int sub1 = 0, sub2 = totalSum;
        for (int i = 0; i < n - 1 ; i++) {
            sub1 += nums[i];
            sub2 -= nums[i];

            if ((sub1 - sub2) % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};