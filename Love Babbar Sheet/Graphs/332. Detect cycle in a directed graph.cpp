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


vi vis;
vi order;
bool flag;

void dfs(int node, vi adj[]) {
    vis[node] = 1;
    order[node] = 1;
    for (auto v : adj[node]) {
        if (!vis[v]) {
            dfs(v, adj);
        }
        else if (vis[v] && order[v]) {
            flag = 1;
        }
    }
    order[node] = 0;
}

bool isCyclic(int V, vector<int> adj[]) {
    flag = 0;
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, adj);
        }
    }
    return flag;
}

int abc() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    vis.assign(n, 0);
    order.assign(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
    }

    cout << isCyclic(n, adj);

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
