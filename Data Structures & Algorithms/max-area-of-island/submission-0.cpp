class Solution {
public:

    vector<vector<bool>> visited;
    int dr [4] = {1,-1,0,0};
    int dc [4] = {0,0,1,-1};

    int maxAREA = 0;    
    int ones_count = 0;

    void dfs(int r,int c , vector<vector <int>>& board ){

     visited[r][c] = true;
        ones_count++;
    
        for (int i = 0 ; i < 4 ;i++){

         int nr = r+dr[i];
         int nc = c + dc [i];       



            if (nr <  0 || nr >= board.size() || nc <0 || nc >=board[0].size()){
                continue;
            }

            if (visited[nr][nc]){
                continue;
            }

            if (board[nr][nc] == 0){
                continue;
            }


            
            dfs(nr,nc,board);
            


        }



    }




    int maxAreaOfIsland(vector<vector<int>>& grid) {


      visited.resize(grid.size() 
      ,
      vector<bool>(grid[0].size(), false)
      );


        for (int  i = 0 ; i < grid.size();i++){

        for (int j = 0 ; j < grid[i].size();j++){

            if (grid[i][j] == 1 && !visited[i][j]){
                ones_count =0;
                dfs(i,j,grid);
                maxAREA = max(maxAREA,ones_count);   

            }    

        }    

        }



        if (maxAREA == 0){
            return 0;
        }

        else {

            return maxAREA;
        }



    }
};
