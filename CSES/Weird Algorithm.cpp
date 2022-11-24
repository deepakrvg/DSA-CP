#include <bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize("Ofast")
 
#define int long long
 
int mod = 1e9 + 7;
 
 
 
 
 
 
int abc() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2) {
            n = (n * 3) + 1;
        }
        else {
            n /= 2;
        }
    }
    cout << n;
 
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
