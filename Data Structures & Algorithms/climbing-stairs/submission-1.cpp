class Solution {
public:

    vector<int> memo;

    int solve(int n, int index) {
        
        if (index == n) return 1;
        if (index > n) return 0;

        if (memo[index] != -1) return memo[index];

        int opt1 = solve(n, index + 1);
        int opt2 = solve(n, index + 2);

        return memo[index] = opt1 + opt2;
    }

    int climbStairs(int n) {
        memo.resize(n + 1, -1);
        return solve(n, 0);
    }
};