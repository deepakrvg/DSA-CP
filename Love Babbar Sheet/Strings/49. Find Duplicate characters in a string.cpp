#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

int mod = 1e9 + 7;


vector<char> solve(string s) {
	int n = s.size();
	unordered_map<char, int> mp;
	vector<char> ans;
	for (int i = 0; i < n; i++) {
		if (mp[s[i]] == 1) {
			ans.push_back(s[i]);
			mp[s[i]]++;
		}
		else mp[s[i]]++;
	}
	return ans;
}

int abc() {
	string s;
	cin >> s;

	auto ans = solve(s);
	for (auto x : ans) {
		cout << x << " ";
	}

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
