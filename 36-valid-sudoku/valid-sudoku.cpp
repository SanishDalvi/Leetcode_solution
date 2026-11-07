class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col) {
        char digit = board[row][col];
        for (int i = 0; i < 9; i++) {
            // BUG FIX: Ensure we do not compare the cell with itself
            if ((i != col && board[row][i] == digit) ||
                (i != row && board[i][col] == digit)) {
                return false;
            }
        }

        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;
        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if ((i != row || j != col) && board[i][j] == digit)
                    return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (!isSafe(board, i, j)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};