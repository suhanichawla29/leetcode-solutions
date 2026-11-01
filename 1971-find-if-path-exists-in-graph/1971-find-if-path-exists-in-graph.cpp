class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges,
                   int source, int destination) {
        vector<vector<int>> adj(n);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n, false);
        stack<int> st;
        st.push(source);
        vis[source] = true;

        while (!st.empty()) {
            int u = st.top();
            st.pop();

            if (u == destination)
                return true;

            for (int v : adj[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    st.push(v);
                }
            }
        }

        return false;
    }
};