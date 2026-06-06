class Solution {
public:

    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};

    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        int fresh = 0;

        for(int r = 0; r < n; r++) {

            for(int c = 0; c < m; c++) {

                if(grid[r][c] == 2) {
                    q.push({r,c});
                }

                else if(grid[r][c] == 1) {
                    fresh++;
                }
            }
        }

        if(fresh == 0) {
            return 0;
        }

        int minutes = 0;

        while(!q.empty()) {

            int sz = q.size();

            bool rottedSomething = false;

            for(int i = 0; i < sz; i++) {

                auto [r,c] = q.front();
                q.pop();

                for(int d = 0; d < 4; d++) {

                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    if(nr < 0 || nr >= n ||
                       nc < 0 || nc >= m) {
                        continue;
                    }

                    if(grid[nr][nc] != 1) {
                        continue;
                    }

                    grid[nr][nc] = 2;

                    fresh--;

                    rottedSomething = true;

                    q.push({nr,nc});
                }
            }

            if(rottedSomething) {
                minutes++;
            }
        }

        if(fresh > 0) {
            return -1;
        }

        return minutes;
    }
};