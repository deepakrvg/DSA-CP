#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



bool check(vector<vector<int>> &matrix, int key) {
	int n = matrix.size();
	int m = matrix[0].size();
	int cnt = 0;

	// for every row find # elements <= key using binary search
	for (int i = 0; i < n; i++) {
		int lo = 0;
		int hi = m;
		int ans = m;
		while (lo <= hi) {
			int mid = (lo + hi) / 2;
			if (matrix[i][mid] <= key) {
				lo = mid + 1;
			}
			else {
				ans = mid;
				hi = mid - 1;
			}
		}
		cnt += ans;
	}
	return cnt <= (n * m) / 2;
}

int median(vector<vector<int>> &matrix, int R, int C) {
	// binary search on answer
	int lo = 0;
	int hi = 2000;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (check(matrix, mid)) {
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	return lo;
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

	auto ans = median(matrix, n, m);
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
