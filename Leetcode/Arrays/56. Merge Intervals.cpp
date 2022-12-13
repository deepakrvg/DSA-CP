#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> ans;
	int i = 1;
	int index = 0;
	while (i < intervals.size()) {
		if (intervals[i][0] <= intervals[index][1]) {
			intervals[index][1] = max(intervals[index][1], intervals[i][1]);
		}
		else {
			index++;
			intervals[index][0] = intervals[i][0];
			intervals[index][1] = intervals[i][1];
		}
		i++;
	}
	for (int j = 0; j <= index; j++) {
		ans.push_back(intervals[j]);
	}
	return ans;
}

int abc() {
	int n;
	cin >> n;
	vector<vector<int>> intervals(n, vector<int> (2));
	for (int i = 0; i < n; i++) {
		cin >> intervals[i][0] >> intervals[i][1];
	}

	auto ans = merge(intervals);

	for (auto x : ans) {
		cout << x[0] << " " << x[1] << "\n";
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
