class Solution {
public:
    void solve(int index, vector<char> &s) {
        if (index >= s.size() / 2) {
            return;
        }
        swap(s[index], s[s.size() - index - 1]);
        solve(index + 1, s);
    }
    
    void reverseString(vector<char>& s) {
        solve(0, s);
    }
};
