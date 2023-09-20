#include <bits/stdc++.h>

using namespace std;
#define int long long



void rec(stack<int> &s, int k) {
    if (k == 1) {
        s.pop();
        return;
    }

    int x = s.top();
    s.pop();
    rec(s, k - 1);
    s.push(x);
}

void solve() {
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    int k = (s.size() / 2 ) + 1;

    if (s.size() == 0) {
        return;
    }
    rec(s, k);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
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
