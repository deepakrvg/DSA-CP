#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



void solve(int a[], int b[], int c[], int n, int m) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			c[k++] = a[i++];
		}
		else {
			c[k++] = b[j++];
		}
	}
	while (i < n) {
		c[k++] = a[i++];
	}
	while (j < m) {
		c[k++] = b[j++];
	}
}

int abc() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	int c[n + m];

	solve(a, b, c, n, m);
	for (int i = 0; i < n + m; i++) {
		cout << c[i] << " ";
	}
	// auto ans = solve(a, b, n, m);

	// cout << ans;

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
