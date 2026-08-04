class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        for (int i = n - 2; i >= 0; i--) { // find the pivot element
            if (nums[i] < nums[i + 1]) {
                pivot = i; // store the index of pivot element
                break;
            }
        }

        if (pivot == -1) { // base case that if array is in descending order
            reverse(nums.begin(), nums.end());
            return;
        }

        // next larger element
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[pivot], nums[i]);
                break;
            }
        }

        reverse(nums.begin() + pivot + 1,
                nums.end()); // reversing the part of an arr
    }
};