/*
Given a weighted graph with n nodes and m edges. if node S starts buring at time 0, then find the time of something (node/thread) still burning.
nodes are connected with threads and the time to completely burn from a single side is give.
ip:- 
8 9
1 2 3
1 3 5
1 4 5
2 4 4
4 5 10
4 6 7
6 7 10
6 8 12
7 8 5

op:- 26 (rounded off to next integer)
*/

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define vi vector<int>
#define pi pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second

int mod = 1e9 + 7;

vector<vector<pi>> g;
vi dist;
vi vis;
int n, m;
int ans;
int sum;

void dfs(int node) {
    vis[node] = 1;
    for (auto v : g[node]) {
        if (!vis[v.F]) {
            if (abs(dist[node] - dist[v.F]) >= v.S) {
                sum = min(dist[node], dist[v.F]) + v.S;
            }
            else {
                sum = ceil(( (float) dist[node] + dist[v.F] + v.S) / 2.0);
            }
            ans = max(ans, sum);
            dfs(v.F);
        }
    }
}

void dijkstra(int node) {
    priority_queue<pi> pq;
    pq.push(mp(-0, node));
    dist[node] = 0;

    while (!pq.empty()) {
        pi x = pq.top();
        pq.pop();
        for (auto v : g[x.S]) {
            int u = v.F;
            int wt = v.S;
            if (dist[u] > dist[x.S] + wt) {
                dist[u] = dist[x.S] + wt;
                pq.push(mp(-wt, u));
            }
        }
    }
}

int abc() {
    cin >> n >> m;
    g.clear();
    g.resize(n + 1);
    dist.assign(n + 1, 1e9);
    vis.assign(n + 1, 0);
    ans = 0;

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].pb(mp(b, c));
        g[b].pb(mp(a, c));
    }

    dijkstra(1);
    dfs(1);
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
