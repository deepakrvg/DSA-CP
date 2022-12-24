#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 1000

int mod = 1e9 + 7;


void swap(char &a, char &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

void reverseString(vector<char>& s) {
	int n = s.size();
	int l = 0, r = n - 1;
	while (l < r) {
		swap(s[l], s[r]);
		l++;
		r--;
	}
}

int abc() {
	int n;
	cin >> n;
	vector<char> s(n);
	for (int i = 0; i < n; i++) cin >> s[i];

	reverseString(s);
	for (auto x : s) {
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
