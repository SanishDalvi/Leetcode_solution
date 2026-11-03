class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows;
        unordered_set<int> cols;
        int r = matrix.size(), c = matrix[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for (int i : rows) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = 0;
            }
        }
        for (int i : cols) {
            for (int j = 0; j < r; j++) {
                matrix[j][i] = 0;
            }
        }
    }
};