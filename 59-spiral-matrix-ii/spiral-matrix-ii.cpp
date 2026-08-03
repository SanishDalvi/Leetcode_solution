class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        int srow = 0, erow = n - 1;
        int scol = 0, ecol = n - 1;
        int num = 1;
        while (srow <= erow || scol <= ecol) {
            // top
            for (int i = scol; i <= ecol; i++) {
                result[srow][i] = num;
                num++;
            }

            // right
            for (int i = srow + 1; i <= erow; i++) {
                result[i][ecol] = num;
                num++;
            }

            // bottom
            for (int i = ecol - 1; i >= scol; i--) {
                if (srow == erow) {
                    break;
                }
                result[erow][i] = num;
                num++;
            }

            // left
            for (int i = erow - 1; i >= srow + 1; i--) {
                if (scol == ecol) {
                    break;
                }
                result[i][scol] = num;
                num++;
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return result;
    }
};