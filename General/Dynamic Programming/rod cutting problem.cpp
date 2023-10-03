#include <bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    int n;
    cin >> n;
    int len = n;
    int price[n], length[n];
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) length[i] = i + 1;

    int dp[n + 1][len + 1];
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < len + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < len + 1; j++) {
            if (length[i - 1] <= j) {
                dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][len];
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
