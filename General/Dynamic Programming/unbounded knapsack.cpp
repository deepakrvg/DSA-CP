#include <bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    int n, w;
    cin >> n >> w;
    int val[n], wt[n];
    for (int i = 0; i < n; i++) cin >> val[i];
    for (int i = 0; i < n; i++) cin >> wt[i];

    int dp[n + 1][w + 1];
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < w + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < w + 1; j++) {
            if (wt[i - 1] <= j) {
                dp[i][j] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w];
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) { 
      solve();
    }
    return 0;
}
