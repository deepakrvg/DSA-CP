#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


void rotate(vector<vector<int> >& matrix) {
	int n = matrix.size();

	// transpose the matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}

	// reverse each column of transpose matrix
	// if reverse each row of transpose matrix then matrix will be rotated by 90deg in clockwise direction
	for (int j = 0; j < n; j++) {
		int lo = 0, hi = n - 1;
		while (lo < hi) {
			swap(matrix[lo][j], matrix[hi][j]);
			lo++;
			hi--;
		}
	}
}

int abc() {
	int n;
	cin >> n;
	vector<vector<int>> matrix(n, vector<int> (n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	rotate(matrix);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
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
