class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // following approach uses SC of O(n)

        // unordered_set<int> s;

        // for (int val : nums) {
        //     if (s.find(val) != s.end()) {
        //         return val;
        //     }
        //     s.insert(val);
        // }

        // return -1;

        // solution with SC of constant space O(1)
        // slow-fast pointer approach

        int slow = nums[0], fast = nums[0];

        do {
            slow = nums[slow]; // +1
            fast = nums[nums[fast]]; // +2
        } while (slow != fast);

        slow = nums[0];

        while(slow != fast) {
            slow = nums[slow]; // +1
            fast = nums[fast]; // +1
        }

        return slow;
    }
};