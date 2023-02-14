/*
There are T testcases. In each, you are given a simple undirected graph with N nodes and M edges. Find the number of new edges that you can add, so that it decreases the number of components in the graph.
input:- 
1
6 5
1 2
2 3
4 3
1 4
5 6
output:- 8
*/

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

void dfs(int node, int comp) {
	vis[node] = comp;
	for (auto v : g[node]) {
		if (!vis[v]) {
			dfs(v, comp);
		}
	}
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
		g[a].push_back(b);
		g[b].push_back(a);
	}

	int comp = 0;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			comp++;
			dfs(i, comp);
		}
	}

	int a[comp + 1];
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i++) {
		a[vis[i]]++;
	}

	int ans = 0;
	int sum = 0;
	for (int i = 1; i <= comp; i++) {
		ans += a[i] * sum;
		sum += a[i];
	}
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
	cin >> tc;
	for (int tt = 0; tt < tc; tt++) 
	{
		// cout << "Case #" << (tt + 1) << ": ";
		abc();
	}
 
	return 0;
}
