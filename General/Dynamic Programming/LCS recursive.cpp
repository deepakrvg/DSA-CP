#include <bits/stdc++.h>

using namespace std;
#define int long long


int rec(string a, string b, int n, int m) {
    if (n == 0 or m == 0) {
        return 0;
    }
    if (a[n - 1] == b[m - 1]) {
        return rec(a, b, n - 1, m - 1) + 1;
    }
    else {
        return max(rec(a, b, n - 1, m), rec(a, b, n, m - 1));
    }
}

void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    cout << rec(a, b, n, m);
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
