#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
	vector<int> ans;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ans.push_back(Mat[i][j]);
		}
	}
	sort(ans.begin(), ans.end());
	int k = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Mat[i][j] = ans[k++];
		}
	}
	return Mat;
}

int abc() {
	int n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	auto ans = sortedMatrix(n, arr);
	for (auto x : ans) {
		for (auto y : x) {
			cout << y << " ";
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
