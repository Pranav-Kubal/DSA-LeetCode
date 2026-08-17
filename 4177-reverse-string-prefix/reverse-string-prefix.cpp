class Solution {
public:
    string reversePrefix(string s, int k) {
        // 2 pointer approach
        int st = 0, end = k - 1; 

        while (st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }

        return s;
    }
};