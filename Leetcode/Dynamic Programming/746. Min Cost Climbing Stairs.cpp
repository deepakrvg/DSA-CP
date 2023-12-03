class Solution {
public:
    int rec(vector<int> &cost, vector<int> &dp, int n) {
        if (n == 0 or n == 1) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = min(cost[n - 1] + rec(cost, dp, n - 1), cost[n - 2] + rec(cost, dp, n - 2));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int ans = 0;
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        ans = rec(cost, dp, n);
        return ans;
    }
};
