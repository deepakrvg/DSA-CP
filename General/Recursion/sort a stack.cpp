#include <bits/stdc++.h>

using namespace std;
#define int long long



void insert(stack<int> &s, int x) {
    if (s.size() == 0 || s.top() <= x) {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();
    insert(s, x);
    s.push(temp);
}

void sort(stack<int> &s) {
    if (s.size() == 1) {
        return;
    }

    int x = s.top();
    s.pop();
    sort(s);
    insert(s, x);
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

    sort(s);
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
