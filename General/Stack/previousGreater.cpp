#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            cout << "-1 ";
            st.push(arr[i]);
        }
        else {
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                cout << "-1 ";
            }
            else {
                cout << st.top() << " ";
            }
            st.push(arr[i]);
        }
    }

    return 0;
}
