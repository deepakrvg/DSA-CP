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
    int widthOfBinaryTree(TreeNode* root) {
        int ans = 0;
        if (root == nullptr) {
            return 0;
        }
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            int size = q.size();
            int mn = q.front().second;
            int first, last;
            for (int i = 0; i < size; i++) {
                auto it = q.front();
                q.pop();
                int cur_id = it.second - mn;
                TreeNode *node = it.first;
                if (i == 0) first = cur_id;
                if (i == size - 1) last = cur_id;
                if (node->left) q.push({node->left, 1LL * 2 * cur_id + 1});
                if (node->right) q.push({node->right, 1LL * 2 * cur_id + 2});
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};
