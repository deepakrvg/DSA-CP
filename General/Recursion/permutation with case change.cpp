#include <bits/stdc++.h>

using namespace std;
#define int long long



void rec(string ip, string op) {
    if (ip.length() == 0) {
        cout << op << "\n";
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(toupper(ip[0]));
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    rec(ip, op1);
    rec(ip, op2);
    return;
}

void solve() {
    string ip;
    cin >> ip;
    string op = "";
    rec(ip, op);
    return;
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
