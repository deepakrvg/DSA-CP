#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

int mod = 1e9 + 7;


bool areRotations(string s1,string s2) {
	if (s1.size() != s2.size()) return 0;

	s1 += s1;
	// find returns the position of the first char of the found substr else returns npos
	return s1.find(s2) != string::npos;
}

int abc() {
	string a, b;
	cin >> a >> b;

	auto ans = areRotations(a, b);
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
