class Solution {
public:

    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};

    void dfs(int r, int c,
             vector<vector<int>>& heights,
             vector<vector<bool>>& visited) {

        visited[r][c] = true;

        int n = heights.size();
        int m = heights[0].size();

        for (int i = 0; i < 4; i++) {

            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr < 0 || nr >= n ||
                nc < 0 || nc >= m) {
                continue;
            }

            if (visited[nr][nc]) {
                continue;
            }

            // Reverse water flow
            if (heights[nr][nc] < heights[r][c]) {
                continue;
            }

            dfs(nr, nc, heights, visited);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> pacific(
            n, vector<bool>(m, false)
        );

        vector<vector<bool>> atlantic(
            n, vector<bool>(m, false)
        );

        
        for (int c = 0; c < m; c++) {
            dfs(0, c, heights, pacific);
        }

       
        for (int r = 0; r < n; r++) {
            dfs(r, 0, heights, pacific);
        }

        
        for (int c = 0; c < m; c++) {
            dfs(n - 1, c, heights, atlantic);
        }

        for (int r = 0; r < n; r++) {
            dfs(r, m - 1, heights, atlantic);
        }

        vector<vector<int>> answer;

        for (int r = 0; r < n; r++) {

            for (int c = 0; c < m; c++) {

                if (pacific[r][c] && atlantic[r][c]) {
                    answer.push_back({r,c});
                }
            }
        }

        return answer;
    }
};