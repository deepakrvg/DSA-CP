#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int n = matrix.size();
	int m = matrix[0].size();

	// find the index in first column <= target
	int lo = 0;
	int hi = n - 1;
	int k = 0;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (matrix[mid][0] <= target) {
			k = mid;
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	
	// for kth row find the index with value target
	lo = 0;
	hi = m - 1;
	int index = 0;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (matrix[k][mid] <= target) {
			index = mid;
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}

	if (matrix[k][index] == target) {
		return 1;
	}
	else {
		return 0;
	}
}

int abc() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	int target;
	cin >> target;

	auto ans = searchMatrix(matrix, target);
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
