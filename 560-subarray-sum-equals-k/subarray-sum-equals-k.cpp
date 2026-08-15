class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute force approach => TC = O(n^2)
        // int n = nums.size();
        // int count = 0;

        // for (int i = 0; i < n; i++) {
        //     int sum = 0;
        //     for (int j = i; j < n; j++) {
        //         sum += nums[j];

        //         if (sum == k) count++;
        //     }
        // }

        // return count;

        // optimized hashing approach => TC = O(n)

        int n = nums.size();
        int count = 0;
        vector<int> prefixSum(n, 0);

        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m;

        for (int j = 0; j < n; j++) {
            if (prefixSum[j] == k)
                count++;

            int val = prefixSum[j] - k;
            if (m.find(val) != m.end()) {
                count += m[val];
            }
            if (m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] = 0;
            }
            m[prefixSum[j]]++;
        }

        return count;
    }
};