#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int solve(vector<vector<int>> &arr, int n) {
	vector<vector<int>> mn(n, vector<int> (n));
	vector<vector<int>> mx(n, vector<int> (n));

	// can also compute only max matrix and for min matrix can be combined with finding ans for loop

	// building min array from left to right top to bottom
	mn[0][0] = arr[0][0];
	for (int j = 1; j < n; j++) {
		mn[0][j] = min(mn[0][j - 1], arr[0][j]);
	}
	for (int i = 1; i < n; i++) {
		mn[i][0] = min(mn[i - 1][0], arr[i][0]);
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			mn[i][j] = min({ mn[i][j - 1], mn[i - 1][j], arr[i][j]});
		}
	}

	// building max array from right to left bottom to top
	mx[n - 1][n - 1] = arr[n - 1][n - 1];
	for (int j = n - 2; j >= 0; j--) {
		mx[n - 1][j] = max(mx[n - 1][j + 1], arr[n - 1][j + 1]);
	}
	for (int i = n - 2; i >= 0; i--) {
		mx[i][n - 1] = max(mx[i + 1][n - 1], arr[i][n - 1]);
	}
	for (int i = n - 2; i >= 0; i--) {
		for (int j = n - 2; j >= 0; j--) {
			mx[i][j] = max({ mx[i][j + 1], mx[i + 1][j], arr[i][j] });
		}
	}

	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			ans = max(ans, (mx[i + 1][j + 1] - mn[i][j]) );
		}
	}

	return ans;
}

int abc() {
	int n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int> (n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
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
