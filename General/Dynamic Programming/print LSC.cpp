#include <bits/stdc++.h>

using namespace std;
#define int long long


void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();

    int t[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++) {
        t[i][0] = 0;
    }
    for (int j = 0; j < m + 1; j++) {
        t[0][j] = 0;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (a[i - 1] == b[j - 1]) {
                t[i][j] = t[i - 1][j - 1] + 1;
            }
            else {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }

    int i = n, j = m;
    string ans = "";
    while (i != 0 or j != 0) {
        if (a[i - 1] == b[j - 1]) {
            ans.push_back(a[i - 1]);
            i--;
            j--;
        }
        else {
            if (t[i - 1][j] > t[i][j - 1]) {
                i--;
            }
            else {
                j--;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
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
