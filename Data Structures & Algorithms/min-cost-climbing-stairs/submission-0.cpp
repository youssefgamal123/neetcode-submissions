class Solution {
public:

   int n; 
    vector<int> memo;
    vector<int>cost;
    int solve(int index){



       if (index>=n){
        return 0;
       }    

        if (memo[index] != -1){
            return memo[index];
        }


        int opt1 = solve(index+1);
        int opt2 = solve(index+2);


        return memo[index]= cost[index]+ min(opt1,opt2) ;

    
    
    }

    
    
    int minCostClimbingStairs(vector<int>& c) {
        n = c.size();
        cost =c ;
        memo.resize(cost.size(), -1);

        return min (solve(0) , solve(1));
       
    }
};
