class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        

        int n = grid.size();


      unordered_set <int> set;

        int reapted=0;
        int missing=0;
        
        
        
        for(int i = 0 ; i < n ; i++){

            for (int j = 0 ; j < n ; j++){

              if (set.find(grid[i][j]) != set.end()  ){
                reapted = grid[i][j];
              }      

                set.insert(grid[i][j]);


            }

        } 



       for (int i = 1 ; i<=n*n ; i++){

            if (!set.count(i)){
                missing = i;
                break;
            }


       }



        return {reapted,missing};



    }
};