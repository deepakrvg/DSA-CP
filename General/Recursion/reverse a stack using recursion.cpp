#include <bits/stdc++.h>

using namespace std;
#define int long long



void reverse(stack<int> &s, int x) {
    if (s.size() == 0) {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s, x);
    s.push(temp);
}

void rec(stack<int> &s) {
    if (s.size() == 0)
        return;
    int x = s.top();
    s.pop();
    rec(s);
    reverse(s, x);
}

void solve() {
    int n;
    cin >> n;
    stack<int> s, st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
        st.push(x);
    }

    cout << "orginal stack:- ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";

    rec(s);
    cout << "reversed stack:- ";
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
