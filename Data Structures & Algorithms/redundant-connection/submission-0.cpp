class Solution {
public:

    vector<vector<int>> adj;
    vector<bool> visited;

    void dfs(int node) {

        visited[node] = true;

        for (int nbr : adj[node]) {

            if (visited[nbr]) {
                continue;
            }

            dfs(nbr);
        }
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();

        for (int skip = n - 1; skip >= 0; skip--) {

            adj.assign(n + 1, {});
            visited.assign(n + 1, false);

            for (int i = 0; i < n; i++) {

                if (i == skip) {
                    continue;
                }

                int u = edges[i][0];
                int v = edges[i][1];

                adj[u].push_back(v);
                adj[v].push_back(u);
            }

            dfs(1);

            bool connected = true;

            for (int node = 1; node <= n; node++) {

                if (!visited[node]) {
                    connected = false;
                    break;
                }
            }

            if (connected) {
                return edges[skip];
            }
        }

        return {};
    }
};