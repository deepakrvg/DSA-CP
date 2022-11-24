class Solution {
public:
    int firstUniqChar(string s) {
        map<char, pair<int, int>> m;
        int n = s.size();
        
        for (int i = n - 1; i >= 0; i--) {
            m[s[i]] = make_pair(i, ++m[s[i]].second);
        }
        int index = n;
        for (auto x : m) {
            if (x.second.second == 1) {
                index = min(index, x.second.first);
            }
        }
        
        for (auto x : m) {
            cout << x.first << " " << x.second.first << " " << x.second.second << "\n";
        }
        if (index == n) {
            index = -1;
        }
        return index;
    }
};
