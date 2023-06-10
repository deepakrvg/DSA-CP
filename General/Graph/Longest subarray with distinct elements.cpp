/*
Find the longest subarray length with distinct elements
ip:- abacbda
op:- 4
*/

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define vi vector<int>
#define pi pair<int, int>
#define pf push_back
#define mp make_pair
#define F fisrt
#define S second

int mod = 1e9 + 7;




int abc() {
    string s;
    cin >> s;

    int ans = 0;
    int cnt = 0;
    int n = s.length();
    int freq[26];
    memset(freq, 0, sizeof(freq));
    int head = -1, tail = 0;
    while (tail < n) {
        while ( (head + 1 < n) && (freq[s[head + 1] - 'a'] == 0) ) {
            head++;
            freq[s[head] - 'a']++;
        }
        cnt += head - tail + 1;

        if (head < tail) {
            tail++;
            head = tail - 1;
        }
        else {
            ans = max(ans, cnt);
            tail++;
            freq[s[tail - 1] - 'a']--;
            cnt = 0;
        }
    }
    cout << ans;

    cout << "\n";
    return 0;
}



int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin >> tc;
    for (int tt = 0; tt < tc; tt++) 
    {
        // cout << "Case #" << (tt + 1) << ": ";
        abc();
    }
 
    return 0;
}
