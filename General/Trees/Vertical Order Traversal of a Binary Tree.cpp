/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            mp[it.second.first][it.second.second].insert(it.first->val);
            if (it.first->left) {
                q.push({it.first->left, {it.second.first - 1, it.second.second + 1}});
            }
            if (it.first->right) {
                q.push({it.first->right, {it.second.first + 1, it.second.second + 1}});
            }
        }
        vector<vector<int>> ans;
        for (auto x : mp) {
            vector<int> col;
            for (auto y : x.second) {
                col.insert(col.end(), y.second.begin(), y.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
