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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        while (curr != nullptr || !st.empty()) {
            if (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            else {
                TreeNode *node = st.top()->right;
                if (node == nullptr) {
                    node = st.top();
                    st.pop();
                    ans.push_back(node->val);
                    while (!st.empty() and node == st.top()->right) {
                        node = st.top();
                        st.pop();
                        ans.push_back(node->val);
                    }
                }
                else {
                    curr = node;
                }
            }
        }
        return ans;
    }
};
