#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


vector<int> solve(int arr[], int n, int k) {
	vector<int> ans;
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
		if (mp[arr[i]] >= (n / k)) {
			ans.push_back(arr[i]);
		}
	}
	return ans;
}

int abc() {
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = solve(arr, n, k);

	for (auto x : ans) {
		cout << x  << " ";
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
