class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int index = n - 1;

        int st = 0, end = n - 1;
        while (st <= end) {
            if (abs(nums[st]) > abs(nums[end])) {
                ans[index] = nums[st] * nums[st];
                st++;
            } else {
                ans[index] = nums[end] * nums[end];
                end--;
            }

            index--;
        }
        return ans;
    }
};