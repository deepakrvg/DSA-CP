class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        for (auto x : nums)
            squares.push_back(x * x);
        sort(squares.begin(), squares.end());
        return squares;
    }
};
