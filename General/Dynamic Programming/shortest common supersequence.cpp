#include <bits/stdc++.h>

using namespace std;
#define int long long


int t[1001][1001];

int rec(string a, string b, int n, int m) {
    if (n == 0 or m == 0) {
        return n + m;
    }

    if (t[n][m] != -1) {
        return t[n][m];
    }

    if (a[n - 1] == b[m - 1]) {
        return t[n][m] = rec(a, b, n - 1, m - 1) + 1;
    }
    else {
        return t[n][m] = min(rec(a, b, n - 1, m), rec(a, b, n, m - 1)) + 1;
    }
}

void solve() {
    memset(t, -1, sizeof(t));

    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    
    int t[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++) {
        t[i][0] = i;
    }
    for (int j = 0; j < m + 1; j++) {
        t[0][j] = j;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (a[i - 1] == b[j - 1]) {
                t[i][j] = t[i - 1][j - 1] + 1;
            }
            else {
                t[i][j] = min(t[i - 1][j], t[i][j - 1]) + 1;
            }
        }
    }
    cout << t[n][m];
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) { 
      solve();
    }
    return 0;
}
