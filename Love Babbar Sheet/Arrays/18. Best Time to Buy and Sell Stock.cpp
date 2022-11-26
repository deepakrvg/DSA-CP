#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int maxProfit(vector<int>& prices) {
	int ans = 0;
	int mx = -1;
	for (int i = prices.size() - 1; i >= 0; i--) {
		mx = max(mx, prices[i]);
		ans = max(ans, mx - prices[i]);
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	vector<int> prices(n);
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}

	int ans = maxProfit(prices);
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
