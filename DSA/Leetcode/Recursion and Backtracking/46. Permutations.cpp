class Solution {
public:
    void recurse(int index, vector<int> &nums, vector<vector<int>> &ans) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            recurse(index + 1, nums, ans);
            swap(nums[i], nums[index]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        recurse(index, nums, ans);
        return ans;
    }
};
