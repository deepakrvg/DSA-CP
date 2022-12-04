#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


bool subArrayExists(int arr[], int n) {
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		if (i) arr[i] = arr[i] + arr[i - 1];
		mp[arr[i]]++;
		if (mp[arr[i]] > 1 || arr[i] == 0) {
			return 1;
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

	auto ans = subArrayExists(arr, n);

	if (ans) {
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
	// cin >> tc;
	for (int tt = 0; tt < tc; tt++) 
	{
		// cout << "Case #" << (tt + 1) << ": ";
		abc();
	}
 
	return 0;
}
