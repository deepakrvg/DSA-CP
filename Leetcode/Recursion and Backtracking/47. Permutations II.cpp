class Solution {
public:
    void solve(int index, set<vector<int>> &ans, vector<int> &nums) {
        if (index == nums.size()) {
            ans.insert(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(index + 1, ans, nums);
            swap(nums[index], nums[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> result;
        solve(0, ans, nums);
        for (auto x : ans) {
            result.push_back(x);
        }
        return result;
    }
};
