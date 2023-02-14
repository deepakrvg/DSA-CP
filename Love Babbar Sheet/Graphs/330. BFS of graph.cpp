class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V, 0);
        queue<int> q;
        vector<int> ans;
        vis[0] = 1;
        q.push(0);
        ans.push_back(0);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto v : adj[node]) {
                if (!vis[v]) {
                    vis[v] = 1;
                    q.push(v);
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};
