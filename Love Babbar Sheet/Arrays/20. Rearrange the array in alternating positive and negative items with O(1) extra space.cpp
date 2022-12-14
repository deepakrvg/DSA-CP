#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



void solve(int arr[], int n) {
	vector<int> pos, neg;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			neg.push_back(arr[i]);
		}
		else {
			pos.push_back(arr[i]);
		}
	}
	if (pos.size() > neg.size()) {
		int i = 0, j = 0;
		int k = 0;
		while (i < pos.size() && j < neg.size()) {
			arr[k] = pos[i];
			k++;
			i++;
			arr[k] = neg[j];
			k++;
			j++;
		}
		while (i < pos.size()) {
			arr[k] = pos[i];
			k++;
			i++;
		}
	}
	else {
		int i = 0, j = 0;
		int k = 0;
		while (i < pos.size() && j < neg.size()) {
			arr[k] = neg[j];
			k++;
			j++;
			arr[k] = pos[i];
			k++;
			i++;
		}
		while (j < neg.size()) {
			arr[k] = neg[j];
			k++;
			j++;
		}
	}
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	solve(arr, n);
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
