#include <bits/stdc++.h>

using namespace std;
#define int long long



void toh(int s, int d, int h, int n) {
    if (n == 1) {
        cout << s << "->" << d << ", " << h << "\n";
        return;
    }
    toh(s, h, d, n - 1);
    cout << s << "->" << d << ", " << h << "\n";
    toh(h, d, s, n - 1);
}

void solve() {
    int n;
    cin >> n;
    int s = 1, d = 2, h = 3;
    toh(s, d, h, n);
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
