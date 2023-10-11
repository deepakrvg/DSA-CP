void preorder(Node* root, int level, vector<int> &ans) {
    if (root == nullptr) {
        return;
    }
    if (ans.size() == level) {
        ans.push_back(root->data);
    }
    preorder(root->left, level + 1, ans);
    preorder(root->right, level + 1, ans);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if (root == nullptr) {
       return ans;
   }
   int level = 0;
   preorder(root, level, ans);
   return ans;
}
