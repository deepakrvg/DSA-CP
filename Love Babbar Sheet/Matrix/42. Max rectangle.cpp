#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

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

int maxArea(int M[MAX][MAX], int n, int m) {
	vector<int> height(m);
	int ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (M[i][j]) height[j] = height[j] + 1;
			else height[j] = 0;
		}
		ans = max(ans, largestRectangleArea(height));
	}
	return ans;
}

int abc() {
	int n, m;
	cin >> n >> m;
	int M[MAX][MAX];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> M[i][j];
		}
	}

	auto ans = maxArea(M, n, m);
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
