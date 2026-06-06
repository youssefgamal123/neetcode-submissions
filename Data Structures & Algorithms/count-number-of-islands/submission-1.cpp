class Solution {
public:

    vector<vector<bool>> vis;
    int dr[4] = {1,-1,0,0};
    int dc [4] = {0,0,1,-1};


        void dfs (int i , int j , vector<vector<char>> & board ){

           vis[i][j] = true;

           for (int counter = 0 ; counter < 4 ; counter++){

             int nr = i +dr[counter];
             int nc = j + dc[counter];   


            if (nr <0 || nr >= board.size() || nc < 0 ||nc >= board[0].size()  ){
                continue;
            }

             if (board[nr][nc] == '0'){
                continue;
            }
           

            if (vis[nr][nc]){
                continue;
            }

            


            dfs(nr,nc,board);


           } 


        }



    int numIslands(vector<vector<char>>& grid) {

       vis.resize(grid.size(), 
       vector<bool>(grid[0].size() , false)
       
       ) ;


        int islands = 0;

       for (int r = 0 ; r< grid.size();r++){

       for (int c = 0 ; c< grid[r].size();c++){

            if (grid[r][c] == '1'  && !vis[r][c]){
                islands++;
                dfs(r,c , grid);
            }

       } 


       }


        return islands;


    }
};
