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
    int maxDepth(TreeNode *root, int &mx) {
        if (root == nullptr) {
            return 0;
        }
        int l = maxDepth(root->left, mx);
        int r = maxDepth(root->right, mx);
        mx = max(mx, l + r);
        return 1 + max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int mx = 0;
        int ans = maxDepth(root, mx);
        return mx;
    }
};
