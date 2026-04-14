class Solution {
public:

    vector <int> memo;
 
    int climbStairs(int n, int index) {
        
        if (index == n) {
            return 1;
        }

        int opt2 = 0;


        if (memo[index] != -1 ){
            return memo[index];
        }


        if (index+2 <= n) {
        opt2 = climbStairs(n, index + 2);

        }

        int opt1 = climbStairs(n, index + 1);

        return memo[index]= opt1 + opt2;
    }

    int climbStairs(int n) {
        memo.resize(n+1,-1);
        return  climbStairs(n, 0);
    }
};