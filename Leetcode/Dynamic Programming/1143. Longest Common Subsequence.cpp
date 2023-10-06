class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        int t[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++) {
            t[i][0] = 0;
        }
        for (int i = 0; i < m + 1; i++) {
            t[0][i] = 0;
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    t[i][j] = t[i - 1][j - 1] + 1;
                }
                else {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        return t[n][m];
    }
};
