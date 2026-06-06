class Solution {
public:

    vector<bool> visited;
    vector<vector<int>> adjlist;



        void dfs(int node ){

        
        visited[node] = true;

            for (int nghbr : adjlist[node]){

                if (visited[nghbr]){
                    continue;
                }

                dfs(nghbr);

            }


        }


    int countComponents(int n, vector<vector<int>>& edges) {

        int connected_component = 0;

        visited.resize(n);
        adjlist.resize(n);

        for (auto& edge : edges) {

            int u = edge[0];
            int v = edge[1];

            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }


        for (int node = 0 ; node < n ; node++){
            if (!visited[node]) {

                connected_component++;

                dfs(node);
            }
        }



        return connected_component;

    }
};
