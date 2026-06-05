class Solution {
public:

      vector<vector<bool>> vis;  

      int dx [4] = {1,-1,0,0};
      int dy [4] = {0,0,1,-1};

        bool flag = false;

        void solve (int rr , int cc , string curr , string word,vector<vector<char>>& grid){

         vis[rr][cc] = true;

            if (curr == word){
                flag = true;
                return;
            }



         for (int i = 0 ; i < 4 ; i++){

           int nr = rr +dx[i];
           int nc = cc + dy[i];     


            if (nr < 0 || nr >= grid.size() || nc < 0 || nc >= grid[0].size() ){
                continue;
            }

           if (vis[nr][nc]){
            continue;
           } 



            curr.push_back(grid[nr][nc]);
            solve(nr,nc,curr,word,grid);

            curr.pop_back();
            
         }   
        vis[rr][cc] = false;


        }




    bool exist(vector<vector<char>>& board, string word) {

        char begining = word[0];
        string strtcurrent;
        strtcurrent.push_back(begining);

        vis.resize(board.size(),
        vector<bool>(board[0].size())
        
        
        );


        for (int r = 0 ; r<  board.size();r++){

           for (int c = 0 ; c < board[r].size();c++){

              if (board[r][c]  == begining){
                solve(r,c,strtcurrent,word,board);
              }  



           }     


        }


        return flag;

    }
};
