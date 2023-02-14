#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define F first
#define S second
#define pi pair<int, int>
#define vi vector<int>

int mod = 1e9 + 7;


vector<vector<int>> g;
vector<int> vis;
vector<int> topo;

void dfs(int node) {
	vis[node] = 1;
	for (auto v : g[node]) {
		if (!vis[v]) {
			dfs(v);
		}
	}
	topo.push_back(node);
}

int abc() {
	int n, m;
	cin >> n >> m;
	g.clear();
	g.resize(n + 1);
	vis.assign(n + 1, 0);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
		}
	}

	reverse(topo.begin(), topo.end());
	for (auto x : topo) {
		cout << x << " ";
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
