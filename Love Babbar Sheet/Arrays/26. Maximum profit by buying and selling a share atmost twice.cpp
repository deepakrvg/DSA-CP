#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



int solve(int arr[], int n) {
	int dp[n];
	memset(dp, 0, sizeof(dp));
	int mn = arr[0];
	int mx = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] > mx) {
			mx = arr[i];
		}
		dp[i] = max(dp[i + 1], mx - arr[i]);
	}
	for (int i = 1; i < n; i++) {
		if (arr[i] < mn) {
			mn = arr[i];
		}
		dp[i] = max(dp[i - 1], dp[i] + arr[i] - mn);
	}
	return dp[n - 1];
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = solve(arr, n);
	cout << ans;

	cout << "\n";
	return 0;
}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc = 1;
	// cin >> tc;
	for (int tt = 0; tt < tc; tt++) 
	{
		// cout << "Case #" << (tt + 1) << ": ";
		abc();
	}
 
	return 0;
}
