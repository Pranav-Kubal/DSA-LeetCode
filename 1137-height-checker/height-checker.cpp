class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n);
        int count = 0;

        for (int i = 0; i < n; i++) {
            ans[i] = heights[i];
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < n; i++) {
            if (ans[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
};