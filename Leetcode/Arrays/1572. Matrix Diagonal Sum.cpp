class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mat[i][i];
        }
        for (int i = 0; i < n; i++) {
            ans += mat[i][n - i - 1];
        }
        if (n % 2) {
            ans -= mat[n/2][n/2];
        }
        return ans;
    }
};
