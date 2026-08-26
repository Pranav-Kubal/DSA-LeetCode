class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int min = nums[0], max = nums[n-1];

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]];
        }

        for (int i = min; i < max; i++) {
            if (m.find(i) == m.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};