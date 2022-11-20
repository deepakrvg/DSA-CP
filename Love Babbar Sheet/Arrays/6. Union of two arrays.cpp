class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            st.insert(b[i]);
        }
        return st.size();
    }
};


/* Method 2:- Without using STL

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")

#define int long long

int mod = 1e9 + 7;




int abc() {
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	int len = min(n, m);
	int U[n + m];
	int I[len];
	memset(U, -1, sizeof(U));
	memset(I, -1, sizeof(I));

	int i = 0; 
	int j = 0;
	int p = 0, q = 0;

	// union of two arrays
	while (i < n && j < m) {
		if (a[i] == b[j]) {
			if (U[p - 1] != a[i]) {
				U[p] = a[i];
				p++;
				i++;
				j++;
			}
			else {
				i++;
				j++;
			}
		}
		else if (a[i] < b[j]) {
			if (U[p - 1] != a[i]) {
				U[p] = a[i];
				p++;
				i++;
			}
			else {
				i++;
			}
		}
		else {
			if (U[p - 1] != b[j]) {
				U[p] = b[j];
				p++;
				j++;
			}
			else {
				j++;
			}
		}
	}
	while (i < n) {
		if (U[p - 1] != a[i]) {
			U[p] = a[i];
			p++;
			i++;
		}
		else {
			i++;
		}
	}
	while (j < m) {
		if (U[p - 1] != b[j]) {
			U[p] = b[j];
			p++;
			j++;
		}
		else {
			j++;
		}
	}

	// intersection of two arrays
	i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			i++;
		}
		else if (b[j] < a[i]) {
			j++;
		}
		else {
			if (I[q - 1] != a[i]) {
				I[q] = a[i];
				q++;
				i++;
				j++;
			}
			else {
				i++;
				j++;
			}
		}
	}

	cout << "Union:- ";
	for (int i = 0; i < p; i++) {
		cout << U[i] << " ";
	}
	cout << "\n";

	cout << "Intersection:- ";
	for (int i = 0; i < q; i++) {
		cout << I[i] << " ";
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


*/
