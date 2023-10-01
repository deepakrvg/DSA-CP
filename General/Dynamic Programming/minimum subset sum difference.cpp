#include <bits/stdc++.h>

using namespace std;
#define int long long


vector<int> subset_sum(int arr[], int sum, int n) {
    bool dp[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < sum + 1; j++) {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < sum + 1; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - arr[i - 1]];
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    vector<int> ans;
    for (int i = 0; i <= sum / 2; i++) {
        if (dp[n][i] == true)
            ans.push_back(i);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int range = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        range += arr[i];
    }

    vector<int> ans = subset_sum(arr, range, n);
    int mn = INT_MAX;
    for (auto x : ans) {
        mn = min(mn, range - 2 * x);
    }
    cout << mn;
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
