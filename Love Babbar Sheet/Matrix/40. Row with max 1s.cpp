#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	int index = -1;
	int ans = 0;
	int i = 0, j = m - 1;
	int cnt = 0;

	while (i < n) {
		// continue checking from the previous rowth jth value
		while (j >= 0 && arr[i][j] == 1) {
			cnt++;
			j--;
		}
		if (cnt > ans) {
			ans = cnt;
			index = i;
		}
		i++;
	}
	return index;
}

int abc() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	auto ans = rowWithMax1s(arr, n, m);
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
