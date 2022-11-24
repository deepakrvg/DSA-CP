#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;






int abc() {
    int n;
    cin >> n;
    vector<int> a(n, -1);
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        x--;
        a[x] = 1;
    }

    int ans;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            cout << i + 1;
            return 0;
        }
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
