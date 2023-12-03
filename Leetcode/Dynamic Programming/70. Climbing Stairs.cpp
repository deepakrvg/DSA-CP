class Solution {
public:
    int solve(int n, int dp[]) {
        if (n == 0 or n == 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

    int climbStairs(int n) {
        int ans = 0;
        int dp[n + 1];
        memset(dp, -1, sizeof(dp));
        return solve(n, dp);
    }
};
