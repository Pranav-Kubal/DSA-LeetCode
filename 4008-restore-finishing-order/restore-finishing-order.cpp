class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> s;
        vector<int> ans;

        for (int i : friends) {
            s.insert(i);
        }

        for (int num : order) {
            if (s.contains(num)) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};