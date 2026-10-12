class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int i : nums) { // storing even no with their freq
            if (i % 2 == 0) {
                m[i]++;
            }
        }

        for (int i : nums) {
            if (i % 2 == 0 && m[i] == 1) {
                return i;
            }
        }

        return -1;        
    }
};