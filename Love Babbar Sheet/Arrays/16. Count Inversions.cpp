#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


// int ans = 0;

int merge(int arr[], int l, int m, int r) {
	int ans = 0;
	int n1 = m - l + 1;
	int n2 = r - m;

	int p[n1], q[n2];
	for (int i = 0; i < n1; i++) {
		p[i] = arr[l + i];
	}
	for (int i = 0; i < n2; i++) {
		q[i] = arr[m + 1 + i];
	}

	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (p[i] <= q[j]) {
			arr[k++] = p[i++];
		}
		else {
			ans += n1 - i;
			arr[k++] = q[j++];
		}
	}
	while (i < n1) {
		arr[k++] = p[i++];
	}
	while (j < n2) {
		arr[k++] = q[j++];
	}
	return ans;
}

int mergeSort(int arr[], int l, int r) {
	int ans = 0;
	if (l < r) {
		int m = l + (r - l) / 2;
		ans += mergeSort(arr, l, m);
		ans += mergeSort(arr, m + 1, r);
		ans += merge(arr, l, m, r);
	}
	return ans;
}

int inversionCount(int arr[], int N) {
	int ans = mergeSort(arr, 0, N - 1);
	return ans;
}

int abc() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = inversionCount(a, n);
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
