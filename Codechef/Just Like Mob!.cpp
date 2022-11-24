#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int n, m, k, x;

bool check (int a) {
	return (n * a) + (m * (a / k)) >= x;
}

int abc() {
	cin >> n >> m >> k >> x;

	int count = 0;
	int l = -1, r = x + 1;
	while (r > l + 1) {
		int mid = (l + r) / 2;
		if (!check(mid)) {
			l = mid;
		}
		else {
			r = mid;
		}
	}

	// cout << l << " ";
	if (r % k == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

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
