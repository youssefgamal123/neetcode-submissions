class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map <int,unordered_set <char>> rows;
        unordered_map <int,unordered_set <char>> col;
        unordered_map <int,unordered_set <char>> box;



        for (int r = 0 ;r <9 ; r++){

        for (int c = 0 ; c<9 ; c++){

        char val = board[r][c];


        if (val == '.'){
            continue;
        }


        int boxIndex = (r / 3) * 3 + (c / 3); 


        if (rows[r].count(val)  || col[c].count(val) || box[boxIndex].count(val)   ){
            return false;
        }

        rows[r].insert(val);
        col[c].insert(val);
        box[boxIndex].insert(val);




        }



        }

        return true;
         



    }
};
