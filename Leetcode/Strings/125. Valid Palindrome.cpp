class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        while (i < s.length()) {
            s[i] = tolower(s[i]);
            if (!isalnum(s[i])) {
                s.erase(s.begin() + i);
            }
            else {
                i++;
            }
        }
        cout << s;
        i = 0;
        while (i < s.length() / 2) {
            if (s[i] != s[s.length() - i - 1]) {
                return 0;
            }
            i++;
        }
        return 1;
    }
};
