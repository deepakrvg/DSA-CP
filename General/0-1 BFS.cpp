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
vector<int> dist;
int n, m;

void BFS01(int node) {
    deque<int> dq;
    dq.pb(node);
    dist[node] = 0;
    while (!dq.empty()) {
        int x = dq.front();
        dq.pop_front();
        for (auto v : g[x]) {
            if (dist[v.F] > dist[x] + v.S) {
                dist[v.F] = dist[x] + v.S;
                if (v.S == 0) {
                    dq.push_front(v.F);
                }
                else {
                    dq.pb(v.F);
                }
            }
        }
    }
}

int abc() {
    cin >> n >> m;
    g.clear();
    g.resize(n);
    dist.assign(n, 1e9);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].pb(mp(b, c));
        g[b].pb(mp(a, c));
    }

    BFS01(0);
    for (auto x : dist) {
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
