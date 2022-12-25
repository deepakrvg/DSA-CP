// check if a string is valid shuffle of two strings maintaining the relative ordering

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 256

int mod = 1e9 + 7;




bool solve(string a, string b, string c) {
	int i = 0, j = 0, k = 0;
	bool flag = 0;
	while (k < c.size()) {
		if (i < a.size() && a[i] == c[k]) {
			i++;
		}
		else if (j < b.size() && b[j] == c[k]) {
			j++;
		}
		else {
			flag = 1;
			break;
		}
		k++;
	}
	if (flag) {
		return 0;
	}
	return 1;
}

int abc() {
	string a, b, c;
	cin >> a >> b >> c;

	auto ans = solve(a, b, c);
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






/*
find if string a is shuffled substring of string b

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define MAX 256

int mod = 1e9 + 7;


// ASCII can have only 256 characters
bool cmp(int counta[], int countb[]) {
	for (int i = 0; i < MAX; i++) {
		if (counta[i] != countb[i]) {
			return 0;
		}
	}
	return 1;
}

bool solve(string a, string b) {
	int n = a.size();
	int m = b.size();
	if (n > m) {
		return 0;
	}

	int counta[MAX], countb[MAX];
	memset(counta, 0, sizeof(counta));
	memset(countb, 0, sizeof(countb));

	// creating first window and maintaing freq arr
	for (int i = 0; i < n; i++) {
		counta[a[i]]++;
		countb[b[i]]++;
	}

	// traversing each window and if answer found return 1
	for (int i = n; i < m; i++) {
		if (cmp(counta, countb)) {
			return 1;
		}
		countb[b[i]]++;
		countb[b[i - n]]--;
	}

	// manually checking comparing window
	if (cmp(counta, countb)) {
		return 1;
	}
	return 0;
}

int abc() {
	string a, b;
	cin >> a >> b;

	auto ans = solve(a, b);
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
*/
