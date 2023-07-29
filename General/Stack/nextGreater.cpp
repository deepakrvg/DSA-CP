#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stack<int> s;
    s.push(arr[n - 1]);
    int a[n];
    a[n - 1] = -1;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        a[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for (auto x : a) {
        cout << x << " ";
    }

    return 0;
}
