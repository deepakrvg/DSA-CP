#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;



void nextPermutation(vector<int>& nums) {
	int n = nums.size();
	int index = -1;

	// find first element from right arr[i] > arr[i - 1]
	for (int i = n - 1; i >= 1; i--) {
		if (nums[i] > nums[i - 1]) {
			index = i;
			break;
		}
	}

	// if index == -1 i.e. arr in descending order
	if (index == -1) {
		int j = 0;
		while (j < n/2) {
			swap(nums[j], nums[n - j - 1]);
			j++;
		}
		return;
	}

	// search next element just greater than arr[index - 1] in range index..n-1
	int temp = index;
	for (int i = index; i < n; i++) {
		if (nums[i] > nums[index - 1]) {
			if (nums[temp] >= nums[i]) {
				temp = i;
			}
		}
	}
	swap(nums[index - 1], nums[temp]);

	// reverse index..n-1
	int l = index, r = n - 1;
	while (l < r) {
		swap(nums[l], nums[r]);
		l++;
		r--;
	}
}

int abc() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	nextPermutation(nums);

	for (auto x : nums) {
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
