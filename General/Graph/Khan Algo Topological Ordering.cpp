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
vector<int> indegree;
int n, m;

void khan() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0) {
			q.push(i);
		}
	}
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		topo.push_back(x);
		for (auto v : g[x]) {
			indegree[v]--;
			if (indegree[v] == 0) {
				q.push(v);
			}
		}
	}
}

int abc() {
	cin >> n >> m;
	g.clear();
	g.resize(n + 1);
	vis.assign(n + 1, 0);
	indegree.assign(n + 1, 0);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		indegree[b]++;
	}
	khan();
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
