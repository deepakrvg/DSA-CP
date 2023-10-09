#include <bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    string a;
    cin >> a;
    int n = a.length();
    string b = a;
    reverse(b.begin(), b.end());

    int t[n + 1][n + 1];
    for (int i = 0; i < n + 1; i++) {
        t[i][0] = 0;
    }
    for (int j = 0; j < n + 1; j++) {
        t[0][j] = 0;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (a[i - 1] == b[j - 1]) {
                t[i][j] = t[i - 1][j - 1] + 1;
            }
            else {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }

    cout << n - t[n][n];
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
