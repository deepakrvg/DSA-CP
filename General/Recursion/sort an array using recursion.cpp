#include <bits/stdc++.h>

using namespace std;
#define int long long




void place(vector<int> &v, int temp) {
    if (v.size() == 0 || v[v.size() - 1] <= temp) {
        v.push_back(temp);
        return;
    }

    int x = v[v.size() - 1];
    v.pop_back();
    place(v, temp);
    v.push_back(x);
}

void rec(vector<int> &v) {
    if (v.size() == 1) {
        return;
    }

    int x = v[v.size() - 1];
    v.pop_back();
    rec(v);

    place(v, x);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    rec(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
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
