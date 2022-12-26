#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;




string countAndSay(int n) {
	// base case 
	if (n == 1) {
		return "1";
	}
	if (n == 2) {
		return "11";
	}

	string str = "11";
	for (int i = 3; i <= n; i++) {
		str += '$';
		int len = str.size();
		int cnt = 1;
		string tmp = "";
		for (int j = 1; j < len; j++) {
			if (str[j] != str[j - 1]) {
				tmp += cnt + '0';
				tmp += str[j - 1];
				cnt = 1;
			}
			else cnt++;
		}
		str = tmp;
	}
	return str;
}

int abc() {
	int n;
	cin >> n;

	auto ans = countAndSay(n);
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
