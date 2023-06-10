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
int n, m;

void dijkstra(int node) {
    priority_queue<pi> pq;
    pq.push(mp(-0, node));
    dist[node] = 0;

    while (!pq.empty()) {
        pi x = pq.top();
        pq.pop();
        int wt = -x.F;
        int u = x.S;
        for (auto v : g[u]) {
            if (dist[v.F] > dist[u] + v.S) {
                dist[v.F] = dist[u] + v.S;
                pq.push(mp(-v.S, v.F));
            }
        }
    }
}

int abc() {
    cin >> n >> m;
    g.clear();
    g.resize(n + 1);
    dist.assign(n + 1, 1e9);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].pb(mp(b, c));
    }

    dijkstra(1);
    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
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
