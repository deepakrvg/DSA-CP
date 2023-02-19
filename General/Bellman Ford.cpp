/*
Detect negative cycle
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


class Node {
public:
    int u, v, wt;
    Node(int a, int b, int c) {
        u = a;
        v = b;
        wt = c;
    }
};

int abc() {
    int n, m;
    cin >> n >> m;
    vector<Node> edges;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.pb(Node(a, b, c));
    }

    int src = 0;
    vi dist(n + 1, 0);
    dist[0];
    for (int i= 0; i < n - 1; i++) {
        for (auto x : edges) {
            if (dist[x.v] > dist[x.u] + x.wt) {
                dist[x.v] = dist[x.u] + x.wt;
            }
        }
    }

    bool flag = 0;
    for (auto x : edges) {
        if (dist[x.v] > dist[x.u] + x.wt) {
            flag = 1;
            break;
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
