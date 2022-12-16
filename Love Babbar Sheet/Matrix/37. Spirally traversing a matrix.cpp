#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
	vector<int> ans;
	int i = 0;
	int j = 0;
	while (i < r && j < c) {
		// i row (0, 1, 2, ..) row
		for (int k = j; k < c; k++) {
			ans.push_back(matrix[i][k]);
		}
		i++;
		
		// c col (c-1, c-2, c-3, ..) col
		for (int k = i; k < r; k++) {
			ans.push_back(matrix[k][c - 1]);
		}
		c--;

		// r row (r-1, r-2, r-3, ..) row
		if (i < r) {
			for (int k = c - 1; k >= j; k--) {
				ans.push_back(matrix[r - 1][k]);
			}
			r--;
		}

		// j col (0, 1, 2, ..) col
		if (j < c) {
			for (int k = r - 1; k >= i; k--) {
				ans.push_back(matrix[k][j]);
			}
			j++;
		}
	}
	return ans;
}

int abc() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> matrix(r, vector<int>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> matrix[i][j];
		}
	}

	auto ans = spirallyTraverse(matrix, r, c);
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
