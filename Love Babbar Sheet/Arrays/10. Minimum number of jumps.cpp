#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



int minJumps(int arr[], int n) {
	int mx = arr[0];
	int step = arr[0];
	int jump = 1;
	if (n == 1) {
		return 0;
	}
	else if (arr[0] == 0) {
		return -1;
	}
	else {
		for (int i = 1; i < n; i++) {
			if (i == n - 1) {
				return jump;
			}
			mx = max(mx, arr[i] + i);
			step--;
			if (step == 0) {
				jump++;
				if (i >= mx) {
					return -1;
				}
				step = mx - i;
			}
		}
	}
	return 0;
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = minJumps(arr, n);

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
