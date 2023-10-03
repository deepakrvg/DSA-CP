#include <bits/stdc++.h>

using namespace std;
#define int long long


struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* build_tree(Node *node) {
    int x;
    // cout << "Enter the data: ";
    cin >> x;
    if (x == -1) 
        return nullptr;
    node = new Node(x);
    // cout << "Enter the left node of " << x << ": ";
    node->left = build_tree(node->left);
    // cout << "Enter the right node of " << x << ": ";
    node->right = build_tree(node->right);
    return node;
}

void solve() {
    Node *root = nullptr;
    root = build_tree(root);
    
    if (root == nullptr) {
        return;
    }

    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;

    stack<pair<Node*, int>> st;
    st.push(make_pair(root, 1));

    while (!st.empty()) {
        auto it = st.top();
        st.pop();
        if (it.second == 1) {
            preorder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != nullptr) {
                st.push({it.first->left, 1});
            }
        }
        else if (it.second == 2) {
            inorder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right != nullptr) {
                st.push({it.first->right, 1});
            }
        }
        else {
            postorder.push_back(it.first->data);
        }
    }

    cout << "preorder: ";
    for (auto x : preorder)
        cout << x << " ";
    cout << "\ninorder: ";
    for (auto x : inorder)
        cout << x << " ";
    cout << "\npostorder: ";
    for (auto x : postorder)
        cout << x << " ";
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) { 
      solve();
    }
    return 0;
}
