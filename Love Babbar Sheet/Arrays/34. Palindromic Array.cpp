#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


bool palin(int n) {
	int temp = n;
	int ans = 0;
	while (temp) {
		ans = (ans * 10) + (temp % 10);
		temp /= 10;
	}
	if (ans == n) {
		return 1;
	}
	else {
		return 0;
	}
}

int PalinArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (!palin(a[i])) {
			return 0;
		}
	}
	return 1;
}

int abc() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	auto ans = PalinArray(a, n);

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
