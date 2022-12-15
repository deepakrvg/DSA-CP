#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



int minSwap(int arr[], int n, int k) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= k) {
			cnt++;
		}
	}

	// find the window of size k having min elements >= k
	int l = 0;
	int r = 0;
	int count = 0;
	int ans = n + 1;
	while (r < cnt) {
		if (arr[r] > k) {
			count++;
		}
		r++;
	}
	r--;

	while (r < n) {
		ans = min(ans, count);
		if (arr[l] > k) {
			count--;
		}
		l++;
		r++;
		if (arr[r] > k) {
			count++;
		}
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
	int k;
	cin >> k;

	auto ans = minSwap(arr, n, k);
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
