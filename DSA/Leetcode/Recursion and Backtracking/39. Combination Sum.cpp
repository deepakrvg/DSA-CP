class Solution {
public:
    void solve(int index, vector<int> &candidates, int target, vector<int> &ds, vector<vector<int>> &ans) {
        if (index >= candidates.size()) return;
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        if (candidates[index] <= target) {
            ds.push_back(candidates[index]);
            solve(index, candidates, target - candidates[index], ds, ans);
            ds.pop_back();
        }
        solve(index + 1, candidates, target, ds, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        solve(0, candidates, target, ds, ans);
        return ans;
    }
};
