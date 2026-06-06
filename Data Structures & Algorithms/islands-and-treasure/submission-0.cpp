class Solution {
public:

    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};

    void islandsAndTreasure(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        for (int r = 0; r < n; r++) {

            for (int c = 0; c < m; c++) {

                if (grid[r][c] == 0) {
                    q.push({r,c});
                }
            }
        }

        while (!q.empty()) {

            auto [r,c] = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {

                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr < 0 || nr >= n ||
                    nc < 0 || nc >= m) {
                    continue;
                }

                if (grid[nr][nc] == -1) {
                    continue;
                }

                if (grid[nr][nc] != 2147483647) {
                    continue;
                }

                grid[nr][nc] = grid[r][c] + 1;

                q.push({nr,nc});
            }
        }
    }
};