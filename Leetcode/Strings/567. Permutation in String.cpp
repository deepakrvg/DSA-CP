#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;

#define MAXCHAR 26

int freq1[MAXCHAR];
int freq2[MAXCHAR];

bool check() {
	for (int i = 0; i < MAXCHAR; i++) {
		if (freq1[i] != freq2[i]) return 0;
	}
	return 1;
}

bool checkInclusion(string s1, string s2) {
	if (s1.length() > s2.length()) return 0;

	int n = s1.length();
	int m = s2.length();
	for (int i = 0; i < n; i++) {
		freq1[s1[i] - 'a']++;
	}

	int head = 0, tail = 0;
	while (head < n - 1) {
		freq2[s2[head] - 'a']++;
		head++;
	}
	if (check()) return 1;

	while (head < m) {
		freq2[s2[head] - 'a']++;
		if (tail - 1 >= 0) {
			freq2[s2[tail - 1] - 'a']--;
			if (freq2[s2[tail - 1] - 'a'] < 0) freq2[s2[tail - 1] - 'a'] = 0;
		}
		if (check()) {
			return 1;
		}
		head++;
		tail++;
	}
	return 0;
}

int abc() {
	string s1, s2;
	cin >> s1 >> s2;

	cout << checkInclusion(s1, s2);

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
