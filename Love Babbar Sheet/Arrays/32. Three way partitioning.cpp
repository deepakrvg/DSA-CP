#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


void threeWayPartition(vector<int>& array, int a, int b) {
	int n = array.size();
	int l = 0, m = 0;
	int r = n - 1;
	while (m <= r) {
		if (array[m] < a) {
			swap(array[m], array[l]);
			l++;
		}
		if (array[m] > b) {
			swap(array[m], array[r]);
			r--;
			continue;
		}
		m++;
	}
}

int abc() {
	int n;
	cin >> n;
	vector<int> array(n);
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	int a, b;
	cin >> a >> b;

	threeWayPartition(array, a, b);

	for (auto x : array) {
		cout << x << " ";
	}

	// cout << ans;

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
