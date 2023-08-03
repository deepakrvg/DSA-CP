#include <bits/stdc++.h>

using namespace std;
#define int long long




void solve() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    int i = 1;
    bool flag = 0;
    while (i < n) {
        if (i + arr[i - 1] == t) {
            flag = 1;
            break;
        }
        else if (i + arr[i - 1] > t) {
            flag = 0;
            break;
        }
        else i += arr[i - 1];
    }
    if (flag) cout << "YES";
    else cout << "NO";
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
