/*
You are in a maze, find the shortest path to exit. You are given multiple starting position and multiple exit. You can start from any strating point and end at any point
#S...#
####.#
S....E
.#S...
.####.
E....E
output:- 3
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


vector<string> g;
vector<vector<int>> dist;
vector<vector<pair<int, int>>> par;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;

bool check(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] != '#') return 1;
	return 0;
}

void bfs(pi st[], int l) {
	queue<pair<int, int>> q;
	for (int i = 0; i < l; i++) {
		q.push(st[i]);
		par[st[i].F][st[i].S] = {-1, -1};
		dist[st[i].F][st[i].S] = 0;
	}
	while (!q.empty()) {
		auto node = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			if (check(node.F + dx[i], node.S + dy[i]) && dist[node.F + dx[i]][node.S + dy[i]] > dist[node.F][node.S] + 1) {
				dist[node.F + dx[i]][node.S + dy[i]] = dist[node.F][node.S] + 1;
				q.push(make_pair(node.F + dx[i], node.S + dy[i]));
			}
		}
	}
}

int abc() {
	cin >> n >> m;
	g.clear();
	g.resize(n);
	dist.assign(n, vector<int> (m, 1e9));
	par.assign(n, vector<pair<int, int>> (m, {0, 0}));
	for (int i = 0; i < n; i++) {
		cin >> g[i];
	}
	int p;
	cin >> p;
	pi st[p];
	for (int i = 0; i < p; i++) {
		cin >> st[i].F >> st[i].S;
	}
	int l;
	cin >> l;
	pi en[l];
	for (int i = 0; i < l; i++) {
		cin >> en[i].F >> en[i].S;
	}

	bfs(st, l);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] > 1e8) dist[i][j] = -1;
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}

	int ans = 1e9;
	for (int i = 0; i < l; i++) {
		ans = min(ans, dist[en[i].F][en[i].S]);
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
	// cin >> tc;
	for (int tt = 0; tt < tc; tt++) 
	{
		// cout << "Case #" << (tt + 1) << ": ";
		abc();
	}
 
	return 0;
}
