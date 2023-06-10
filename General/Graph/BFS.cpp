/*
You are in a maze, find the shortest path to exit. You are given your starting position and one exit.
#S...#
####.#
......
.#....
.####.
E.....
output:- 12

Follow up:- if there is a monster that will eat you up, then can you exit safe?
If monster can move or stay at a postion.
Solution:- if (dist(S, E) < dist(M, E)) then you can exit safe

Follow up:- If there are multiple monsters?
Solution:- if (dist(S, E) < dist(M, E) for all Monsters then you can exit safe
instead of calculating bfs for all monsters, calculate bfs only once for exit
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
vector<vector<pi>> par;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;

bool check(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] != '#') return 1;
	return 0;
}

void bfs(pi st) {
	queue<pair<int, int>> q;
	q.push(st);
	par[st.F][st.S] = {-1, -1};
	dist[st.F][st.S] = 0;
	while (!q.empty()) {
		auto node = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			if (check(node.F + dx[i], node.S + dy[i]) && dist[node.F + dx[i]][node.S + dy[i]] > dist[node.F][node.S] + 1) {
				dist[node.F + dx[i]][node.S + dy[i]] = dist[node.F][node.S] + 1;
				par[node.F + dx[i]][node.S + dy[i]] = {node.F, node.S};
				q.push(make_pair(node.F + dx[i], node.S + dy[i]));
			}
		}
	}
}

void printPath(pi en) {
	if (en.F == -1 && en.S == -1) return;
	printPath(par[en.F][en.S]);
	cout << en.F << " " << en.S << "\n";
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
	pi st, en;
	cin >> st.F >> st.S;
	cin >> en.F >> en.S;

	bfs(st);
	printPath(en);
	cout << dist[en.F][en.S];

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
