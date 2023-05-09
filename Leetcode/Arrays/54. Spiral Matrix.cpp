class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a = 0;
        int b = matrix.size();
        int c = 0;
        int d = matrix[0].size();
        vector<int> ans;
     while (a < b && c < d) {
        for (int i = c; i < d; i++) {
            ans.push_back(matrix[a][i]);
        }
        a++;
        for (int i = a; i < b; i++) {
            ans.push_back(matrix[i][d - 1]);
        }
        d--;
        if (a < b) {
        for (int i = d - 1; i >= c; i--) {
            ans.push_back(matrix[b - 1][i]);
        }
        b--;
        }
        if (c < d) {
        for (int i = b - 1; i >= a; i--) {
            ans.push_back(matrix[i][c]);
        }
        c++;
        }
    }
        return ans;
    }
};
