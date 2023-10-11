//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            mp[it.second] = it.first->data;
            if (it.first->left) q.push({it.first->left, it.second - 1});
            if (it.first->right) q.push({it.first->right, it.second + 1});
        }
        for (auto x : mp) {
            ans.push_back(x.second);
        }
        return ans;
    }
};
