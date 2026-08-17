class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 2 pointer approach
        int n = nums.size();
        int j = 0; // ptr to place non-zero ele

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]); 
                j++;
            }
        }
    }
};