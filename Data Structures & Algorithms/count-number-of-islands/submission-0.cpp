class Solution {
public:
    
    

    vector<vector <bool>> visited;
    
    int dr [4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};


    void dfs(int r , int c, vector<vector<char>>& land){


       visited[r][c] = true;

       for (int i = 0 ; i< 4 ;i++){

        int nr = r+dr[i];
        int nc = c + dc[i];


        if(nr <0 || nr >=land.size() || nc < 0 || nc >= land[0].size() ){
            continue;
        }


        if (land[nr][nc] == '0'){
            continue;
        }

        if (visited[nr][nc]){
            continue;
        }

            dfs(nr,nc,land);

       }         





    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int islands = 0;



        visited.resize(
            
            grid.size(),
         vector<bool>(grid[0].size(), false)



        );

        for (int r = 0 ; r<grid.size();r++){

         for (int c = 0 ; c< grid[r].size();c++){

            if (grid[r][c] == '1' && !visited[r][c]){

                islands++;
                dfs(r,c,grid);
            }



         }       



        }


        return islands;

    }
};
