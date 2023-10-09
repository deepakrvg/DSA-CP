/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    bool isLeaf(Node *root) {
        return root->left == nullptr and root->right == nullptr;
    }
    
    void boundaryLeft(Node *root, vector<int> &ans) {
        Node *cur = root->left;
        while (cur) {
            if (!isLeaf(cur)) ans.push_back(cur->data);
            if (cur->left) cur = cur->left;
            else cur = cur->right;
        }
    }
    
    void addLeaves(Node *root, vector<int> &ans) {
        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }
        if (root->left) addLeaves(root->left, ans);
        if (root->right) addLeaves(root->right, ans);
    }
    
    void boundaryRight(Node *root, vector<int> &ans) {
        Node *cur = root->right;
        stack<int> st;
        while (cur) {
            if (!isLeaf(cur)) st.push(cur->data);
            if (cur->right) cur = cur->right;
            else cur = cur->left;
        }
        
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
    }

    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if (root == nullptr) return ans;
        if (!isLeaf(root)) ans.push_back(root->data);
        boundaryLeft(root, ans);
        addLeaves(root, ans);
        boundaryRight(root, ans);
        return ans;
    }
};
