#include <bits/stdc++.h>

using namespace std;
#define int long long




void rec(vector<int> &v, int k, int index, int &ans) {
    if (v.size() == 1) {
        ans = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    rec(v, k, index, ans);
    return;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    k--;
    int index = 0;
    int ans = -1;
    rec(v, k, index, ans);
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
