#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
	vector<int> ans;
	int i = 0, j = 0, k = 0;
	while (i < n1 && j < n2 && k < n3) {
		if (A[i] == B[j] && B[j] == C[k]) {
			if (!ans.empty()) {
				auto it = ans.rbegin();
				if (*it == A[i]) {
					i++;
					j++;
					k++;
					continue;
				}
				else {
					ans.push_back(A[i]);
				}
			}
			else {
				ans.push_back(A[i]);
			}
			i++;
			j++;
			k++;
		}
		else if (A[i] < B[j] || A[i] < C[k]) {
			i++;
		}
		else if (B[j] < A[i] || B[j] < C[k]) {
			j++;
		}
		else {
			k++;
		}
	}
	return ans;
}

int abc() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int A[n1], B[n2], C[n3];
	for (int i = 0; i < n1; i++) {
		cin >> A[i];
	}for (int i = 0; i < n2; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < n3; i++) {
		cin >> C[i];
	}

	vector<int> ans = commonElements(A, B, C, n1, n2, n3);
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
