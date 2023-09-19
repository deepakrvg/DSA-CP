#include <bits/stdc++.h>

using namespace std;
#define int long long




void rec(int n) {
    // base case
    if (n == 1) {
        cout << 1 << " ";
        return;
    }

    // hypothesis
    rec(n - 1);

    // induction
    cout << n << " ";
}

void solve() {
    int n;
    cin >> n;
    rec(n);
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
