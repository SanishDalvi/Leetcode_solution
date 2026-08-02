class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a = 0;
        unordered_set<int> set;
        int n = grid.size();
        int sum = (n * n) * ((n * n) + 1) / 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum -= grid[i][j];
                if (set.find(grid[i][j]) != set.end()) {
                    a = grid[i][j];
                }
                set.insert(grid[i][j]);
            }
        }
        return {a, sum + a};
    }
};