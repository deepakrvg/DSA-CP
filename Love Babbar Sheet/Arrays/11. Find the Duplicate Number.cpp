#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;


int findDuplicate(vector<int>& nums) {
	int n = nums.size();
	for (int i = 0; i < n; i++) {
		nums[nums[i] % n] += n;
	}
	for (int i = 0; i < n; i++) {
		// cout << nums[i] << " ";
		if (nums[i] / n > 1) {
			return i;
		}
	}
	return -1;
}

int abc() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int ans = findDuplicate(nums);
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
