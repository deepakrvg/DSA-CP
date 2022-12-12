#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



int getMinDiff(int arr[], int n, int k) {
	sort(arr, arr + n);
	int ans = arr[n - 1] - arr[0];
	int mn = arr[0];
	int mx = arr[n - 1];
	for (int i = 1; i < n; i++) {
		if (arr[i] - k < 0) {
			continue;
		}
		mn = min(arr[0] + k, arr[i] - k);
		mx = max(arr[n - 1] - k, arr[i - 1] + k);
		ans = min(ans, mx - mn);
	}
	return ans;
}

int abc() {
	int n, k;
	cin >> k >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = getMinDiff(arr, n, k);

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
