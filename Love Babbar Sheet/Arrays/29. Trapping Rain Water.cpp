#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


long long trappingWater(int arr[], int n) {
	int left[n], right[n];
	left[0] = arr[0];
	right[n - 1] = arr[n - 1];
	for (int i = 1; i < n; i++) {
		left[i] = max(left[i - 1], arr[i]);
	}
	for (int i = n - 2; i >= 0; i--) {
		right[i] = max(right[i + 1], arr[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += ((min(left[i], right[i])) - (arr[i]) );
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = trappingWater(arr, n);

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
