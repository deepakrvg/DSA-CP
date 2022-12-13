#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



long long maxProduct(vector<int> arr, int n) {
	long long mn = arr[0];
	long long mx = arr[0];
	long long ans = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < 0) {
			swap(mn, mx);
		}
		mn = min(1ll* arr[i], mn * arr[i]);
		mx = max(1ll* arr[i], mx * arr[i]);
		ans = max(ans, mx);
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = maxProduct(arr, n);
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
