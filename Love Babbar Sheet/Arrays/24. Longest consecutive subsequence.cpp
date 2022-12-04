#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int findLongestConseqSubseq(int arr[], int N) {
	sort(arr, arr + N);
	int ans = 1;
	int sum = 1;
	for (int i = 0; i < N; i++) {
		if (i) {
			if (arr[i] - arr[i - 1] == 1) {
				sum++;
				ans = max(ans, sum);
			}
			else if (arr[i] - arr[i - 1] == 0) {
				continue;
			}
			else {
				sum = 1;
			}
		}
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = findLongestConseqSubseq(arr, n);

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

// Method 2:- Hashing

/*

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int findLongestConseqSubseq(int arr[], int N) {
	unordered_set<int> st;
	for (int i = 0; i < N; i++) {
		st.insert(arr[i]);
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (st.find(arr[i] - 1) == st.end()) {
			int j = arr[i];
			while (st.find(j) != st.end()) {
				j++;
			}
			ans = max(ans, j - arr[i]);
		}
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto ans = findLongestConseqSubseq(arr, n);

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
