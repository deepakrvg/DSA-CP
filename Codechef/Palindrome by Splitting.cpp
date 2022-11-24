#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;




int abc() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int l = 0;
	int r = n - 1;
	int ans = 0;
	while (l < r) {
		if (a[l] == a[r]) {
			l++;
			r--;
		}
		else if (a[l] > a[r]) {
			a[l] -= a[r];
			r--;
			ans++;
		}
		else if (a[r] > a[l]) {
			a[r] -= a[l];
			l++;
			ans++;
		}
	}
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
	cin >> tc;
	for (int tt = 0; tt < tc; tt++) 
	{
		// cout << "Case #" << (tt + 1) << ": ";
		abc();
	}
 
	return 0;
}
