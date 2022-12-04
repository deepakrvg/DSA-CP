#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


string isSubset(int a1[], int a2[], int n, int m) {
	unordered_map<int, pair<int, int>> mp;
	for (int i = 0; i < n; i++) {
		mp[a1[i]].first++;
	}
	for (int i = 0; i < m; i++) {
		mp[a2[i]].second++;
	}

	for (auto x : mp) {
		// cout << x.first << "->" << x.second.first << " " << x.second.second << "\n";
		if (x.second.first < x.second.second) {
			return "No";
		}
	}
	return "Yes";
}

int abc() {
	int n;
	cin >> n;
	int a1[n];
	for (int i = 0; i < n; i++) cin >> a1[i];
	int m;
	cin >> m;
	int a2[m];
	for (int i = 0; i < m; i++) cin >> a2[i];

	auto ans = isSubset(a1, a2, n, m);

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
