#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int k;
    cin >> k;
    stack<int> s;
    int t = k;
    while (t--) {
        s.push(q.front());
        q.pop();
    }
    k = n - k;
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    while (k--) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
