#include <bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < sum + 1; j++) {
            if (i == 0) {
                dp[i][j] = false;
            }
            if (j == 0) {
                dp[i][j] = true;
            }
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < sum + 1; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][sum];
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
