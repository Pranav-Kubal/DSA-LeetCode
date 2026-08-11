class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();

        int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;

        while (srow <= erow && scol <= ecol) {
            // top row
            for (int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
            }

            // right col
            for (int j = srow + 1; j <= erow; j++) {
                ans.push_back(matrix[j][ecol]);
            }

            // bottom row
            for (int i = ecol - 1; i >= scol; i--) {
                if (srow == erow) { // corner case: for odd number matrix when srow = erow then top = bottom
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }

            // left col
            for (int j = erow - 1; j > srow; j--) {
                if (scol == ecol) {
                    break;
                }
                ans.push_back(matrix[j][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }

        return ans;
    }
};