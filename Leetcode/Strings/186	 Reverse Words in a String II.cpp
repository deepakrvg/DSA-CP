#include <bits/stdc++.h>
using namespace std;

void reverseWord(string &s) {
    int n = s.length();
    int i = 0, j = 0, k = 0;
    while (i < n) {
        if (s[i] == ' ') {
            k = i - 1;
            while (j < k) {
                swap(s[j], s[k]);
                j++;
                k--;
            }
            j = i + 1;
        }
        else if (i == n - 1) {
            k = n - 1;
            while (j < k) {
                swap(s[j], s[k]);
                j++;
                k--;
            }
        }
        i++;
    }
}

int main() {
    string s;
    getline(cin, s, '\n');
    reverseWord(s);
    cout << s;

    return 0;
}
