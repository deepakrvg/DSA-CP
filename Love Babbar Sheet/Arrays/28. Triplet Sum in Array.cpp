#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



bool find3Numbers(int A[], int n, int X) {
	sort(A, A + n);
	for (int i = 0; i < n; i++) {
		int l = i + 1;
		int r = n - 1;
		while (l < r) {
			if (A[i] + A[l] + A[r] == X) {
				return 1;
			}
			else if (A[i] + A[l] + A[r] < X) {
				l++;
			}
			else {
				r--;
			}
		}
	}
	return 0;
}

int abc() {
	int n, X;
	cin >> n >> X;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	auto ans = find3Numbers(A, n, X);
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
