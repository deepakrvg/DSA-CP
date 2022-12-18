#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long
#define max 5000

int mod = 1e9 + 7;



int multiply(int x, int res[], int len) {
	int carry = 0;
	for (int i = 0; i < len; i++) {
		int temp = (res[i] * x) + carry;
		res[i] = temp % 10;
		carry = temp / 10;
	}

	while (carry) {
		res[len] = carry % 10;
		carry = carry / 10;
		len++;
	}
	return len;
}

vector<int> factorial(int N) {
	vector<int> ans;
	int res[max];
	res[0] = 1;
	int len = 1;

	for (int i = 2; i <= N; i++) {
		len = multiply(i, res, len);
	}

	for (int i = len - 1; i >= 0; i--) {
		ans.push_back(res[i]);
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;

	auto ans = factorial(n);
	for (auto x : ans) {
		cout << x;
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
