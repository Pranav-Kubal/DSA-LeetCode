class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int digitSum = 0;

            while (num > 0) {
                int digit = num % 10;
                digitSum += digit;
                num /= 10;
            }

            if (i == digitSum) {
                return i;
            }
        }

        return -1;
    }
};