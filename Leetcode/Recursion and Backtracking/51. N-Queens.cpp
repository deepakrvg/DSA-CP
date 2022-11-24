class Solution {
public:
    void solve(int row, vector<string> &board, vector<vector<string>> &ans, vector<int> &col, vector<int> &dia1, vector<int> &dia2, int n) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (col[i] == 0 && dia1[row + i] == 0 && dia2[n - 1 + i - row] == 0) {
                board[row][i] = 'Q';
                col[i] = 1;
                dia1[row + i] = 1;
                dia2[n - 1 + i - row] = 1;
                solve(row + 1, board, ans, col, dia1, dia2, n);
                board[row][i] = '.';
                col[i] = 0;
                dia1[row + i] = 0;
                dia2[n - 1 + i - row] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }
        vector<int> col(n, 0), dia1(2 * n - 1, 0), dia2(2 * n - 1, 0);
        solve(0, board, ans, col, dia1, dia2, n);
        return ans;
    }
};
