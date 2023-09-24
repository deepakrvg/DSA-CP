#include <bits/stdc++.h>

using namespace std;
#define int long long




void rec(int one, int zero, int n, string op) {
    if (n == 0) {
        cout << op << "\n";
        return;
    }
    
    string op1 = op;
    op1.push_back('1');
    rec(one + 1, zero, n - 1, op1);

    if (one > zero) {
        string op2 = op;
        op2.push_back('0');
        rec(one, zero + 1, n - 1, op2);
    }
    return;
}

void solve() {
    int n;
    cin >> n;
    string op = "";
    int one = 0;
    int zero = 0;
    rec(one, zero, n, op);
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
