class Solution {
public:
    void rec(vector<int> &nums, vector<int> &op, vector<vector<int>> &ans, int index) {
        if (index == nums.size()) {
            sort(op.begin(), op.end());
            ans.push_back(op);
            return;
        }

        vector<int> op2 = op;
        op2.push_back(nums[index]);

        rec(nums, op, ans, index + 1);
        rec(nums, op2, ans, index + 1);
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        int index = 0;
        rec(nums, op, ans, index);

        set<vector<int>> st;
        for (auto x : ans) {
            st.insert(x);
        }

        ans.clear();
        for (auto x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};
