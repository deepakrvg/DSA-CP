#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

int mod = 1e9 + 7;


bool check(int mat[MAX][MAX], int n, int k, int x) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int lo = 0;
		int hi = n - 1;
		int ans = 0;
		while (lo <= hi) {
			int mid = lo + (hi - lo) / 2;
			if (mat[i][mid] <= x) {
				ans = mid + 1;
				lo = mid + 1;
			}
			else {
				hi = mid - 1;
			}
		}
		cnt += ans;
	}
	return cnt < k;
}

int kthSmallest(int mat[MAX][MAX], int n, int k) {
	int lo = mat[0][0];
	int hi = mat[n - 1][n - 1];
	int ans = 0;
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (check(mat, n, k, mid)) {
			lo = mid + 1;
		}
		else {
			ans = mid;
			hi = mid - 1;
		}
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	int mat[MAX][MAX];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	int k;
	cin >> k;

	auto ans = kthSmallest(mat, n, k);
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
