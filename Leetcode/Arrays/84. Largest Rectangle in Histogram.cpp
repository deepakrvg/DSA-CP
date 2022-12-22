#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int largestRectangleArea(vector<int>& heights) {
	int n = heights.size();
	stack<int> st;
	int mx = -1;
	for (int i = 0; i <= n; i++) {
		while ( !st.empty() && (i == n || heights[st.top()] >= heights[i]) ) {
			int h = heights[st.top()];
			st.pop();
			int w = i;
			if (!st.empty()) {
				w = i - st.top() - 1;
			}
			mx = max(mx, w * h);
		}
		st.push(i);
	}
	return mx;
}

int abc() {
	int n;
	cin >> n;
	vector<int> heights(n);
	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}

	auto ans = largestRectangleArea(heights);
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
