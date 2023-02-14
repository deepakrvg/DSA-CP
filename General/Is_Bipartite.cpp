/*
In a class of N people, you know which pairs are friends. Is there a way to divide the class in 2 sections that no 2 friend is in the same section>
Input:-
5 5
1 2
2 3
4 3
4 5
1 5
Output:- 0

Input 2:- 
4 4
1 2
2 3
3 4
1 4
Output:- 1
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
bool flag;

void dfs(int node, int color) {
	vis[node] = color;
	for (auto v : g[node]) {
		if (!vis[v]) {
			dfs(v, 1^2^color);
		}
		else if (vis[node] == vis[v]) {
			flag = 0;
		}
	}
}

int abc() {
	int n, m;
	cin >> n >> m;
	g.clear();
	g.resize(n + 1);
	vis.assign(n + 1, 0);
	flag = 1;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	int color = 1;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i, color);
		}
	}
	cout << flag;

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
