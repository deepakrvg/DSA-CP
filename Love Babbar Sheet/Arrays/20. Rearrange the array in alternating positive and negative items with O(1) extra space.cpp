#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



void rearrange(long long *arr, int n) {
	vector<int> mx, mn;
	for (int i = 0; i < n; i++) {
		if (i < n / 2) {
			mn.push_back(arr[i]);
		}
		else {
			mx.push_back(arr[i]);
		}
	}

	int j = 0;
	int mnlen = mn.size();
	int mxlen = mx.size();
	for (int i = 0; i < mnlen; i++) {
		arr[j] = mx[mxlen - i - 1];
		j++;
		arr[j] = mn[i];
		j++;
	}
	if (n % 2) {
		arr[n - 1] = mx[0];
	}
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	rearrange(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
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
