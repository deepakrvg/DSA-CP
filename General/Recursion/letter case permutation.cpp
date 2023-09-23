#include <bits/stdc++.h>

using namespace std;
#define int long long




void rec(string ip, string op, vector<string> &v) {
    if (ip.length() == 0) {
        v.push_back(op);
        return;
    }

    if (isalpha(ip[0])) {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin() + 0);
        rec(ip, op1, v);
        rec(ip, op2, v);
    }
    else {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        rec(ip, op1, v);
    }
}

void solve() {
    string ip;
    cin >> ip;
    string op = "";
    vector<string> v;
    rec(ip, op, v);
    for (auto x : v) {
        cout << x << "\n";
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
