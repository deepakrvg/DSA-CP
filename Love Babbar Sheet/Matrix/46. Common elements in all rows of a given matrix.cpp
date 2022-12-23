#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

int mod = 1e9 + 7;


vector<int> solve(vector<vector<int>> &mat, int n, int m) {
	// map structure:- element, <frequency, last_index>
	unordered_map<int, pair<int, int>> mp;

	// copy the first row in map
	for (int j = 0; j < m; j++) {
		mp[mat[0][j]] = {1, 0};
	}

	// for row 1..n-1 if element is already present in map and index is != i then increment the frequency and update index = i
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ( mp[mat[i][j]].first && (mp[mat[i][j]].second != i) ) {
				mp[mat[i][j]].first++;
				mp[mat[i][j]].second = i;
			}
		}
	}

	// if element frequency is n then add it to ans
	vector<int> ans;
	for (auto x : mp) {
		if (x.second.first == n) {
			ans.push_back(x.first);
		}
	}

	return ans;
}

int abc() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> mat(n, vector<int> (m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}

	auto ans = solve(mat, n, m);
	for (auto x : ans) {
		cout << x << " ";
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
