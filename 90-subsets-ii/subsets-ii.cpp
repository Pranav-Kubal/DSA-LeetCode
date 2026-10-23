class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets) {
        int n = nums.size();
        if (i == n) {
            // store subsets
            subsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i+1, subsets);

        ans.pop_back();
        // exclude
        int idx = i+1;
        // exclude repeatitive values
        while (idx < n && nums[idx] == nums[idx-1]) {
            idx++;
        }
        getAllSubsets(nums, ans, idx, subsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, subsets);

        return subsets;
    }
};