#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b) {
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

int main() {
    string s;
    cin >> s;
    stack<char> st;
    bool flag = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if (st.empty()) {
                flag = 0;
                break;
            }
            if (!check(st.top(), s[i])) {
                flag = 0;
                break;
            }
            st.pop();
        }
    }
    if (!st.empty()) {
        flag = 0;
    }
    cout << flag;

    return 0;
}
