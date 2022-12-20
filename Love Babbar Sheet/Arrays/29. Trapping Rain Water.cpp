#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

#define MAX 1000
int mod = 1e9 + 7;


long long trappingWater(int arr[], int n) {
	int l = 0;
	int r = n - 1;
	int lmax = 0, rmax = 0;
	long long ans = 0;
	while (l <= r) {
		if (arr[l] <= arr[r]) {
			if (arr[l] > lmax) {
				lmax = arr[l];
			}
			else {
				ans += lmax - arr[l];
			}
			l++;
		}
		else {
			if (arr[r] > rmax) {
				rmax = arr[r];
			}
			else {
				ans += rmax - arr[r];
			}
			r--;
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
