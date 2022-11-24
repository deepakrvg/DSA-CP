class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--]) return false;
        }
        return true;
    }

    void solve(string s, int index, vector<string> &ds, vector<vector<string>> &ans) {
        if (index == s.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                ds.push_back(s.substr(index, i - index + 1));
                solve(s, i + 1, ds, ans);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        solve(s, 0, ds, ans);
        return ans;
    }
};
