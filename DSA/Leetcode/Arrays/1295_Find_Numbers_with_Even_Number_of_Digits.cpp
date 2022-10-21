class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = 0;
        for (auto x : nums) {
            int len = 0;
            while (x) {
                x /= 10;
                len++;
            }
            if (len % 2 == 0) 
                n++;
        }
        return n;
    }
};
