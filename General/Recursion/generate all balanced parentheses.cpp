#include <bits/stdc++.h>

using namespace std;
#define int long long




void rec(int open, int close, string op) {
    if (open == 0 && close == 0) {
        cout << op << "\n";
        return;
    }
    if (open != 0) {
        string op1 = op;
        op1.push_back('(');
        rec(open - 1, close, op1);
    }
    if (close > open) {
        string op2 = op;
        op2.push_back(')');
        rec(open, close - 1, op2);
    }
    return;
}

void solve() {
    int n;
    cin >> n;
    int open = n;
    int close = n;
    string op = "";
    rec(open, close, op);
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
