#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int smallestSubWithSum(int arr[], int n, int x) {
	int l = 0, r = 0;
	int sum = 0;
	int ans = n + 1;
	while (l < n) {
		if (sum > x) {
			// cout << sum << "->" << r - l << "\n";
			ans = min(ans, r - l);
			sum -= arr[l];
			l++;
		}
		else {
			if (r < n) {
				sum += arr[r];
				r++;
			}
			else {
				sum -= arr[l];
				l++;
			}
		}
	}
	return ans;
}

int abc() {
	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = smallestSubWithSum(arr, n, x);

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
