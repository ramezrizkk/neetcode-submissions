class Solution {
public:
    vector<int> dp = vector<int>(50, -1);
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n < 0) return 0;

        if (dp[n] != -1) return dp[n];

        int ch1 = climbStairs(n-1);
        int ch2 = climbStairs(n-2);

        return dp[n] = (ch1 + ch2);
    }
};
