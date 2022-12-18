#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;




double solve(vector<int> &a, vector<int> &b, int n, int m) {
	int lo = 0;
	int hi = n;
	while (lo <= hi) {
		int cnt1 = (lo + hi) / 2;
		int cnt2 = ((n + m + 1) / 2) - cnt1;
		
		int l1 = cnt1 == 0 ? INT_MIN : a[cnt1 - 1];
		int l2 = cnt2 == 0 ? INT_MIN : b[cnt2 - 1];
		int r1 = cnt1 == n ? INT_MAX : a[cnt1];
		int r2 = cnt2 == m ? INT_MAX : b[cnt2];

		if (l1 <= r2 && l2 <= r1) {
			if ((n + m) % 2 == 0) {
				return (max(l1, l2) + min(r1, r2)) / 2.0;
			}
			else {
				return max(l1, l2);
			}
		}
		else if (l1 > r2) {
			hi = cnt1 - 1;
		}
		else {
			lo = cnt1 + 1;
		}
	}
	return 0.0;
}

int abc() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	auto ans = solve(a, b, n, m);
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
