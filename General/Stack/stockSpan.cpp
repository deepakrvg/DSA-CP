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
    st.push(0);
    cout << '1 ';
    for (int i = 1; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();
        int span = st.empty() ? (i + 1) : (i - st.top());
        cout << span << " ";
        st.push(i);
    }

    return 0;
}
