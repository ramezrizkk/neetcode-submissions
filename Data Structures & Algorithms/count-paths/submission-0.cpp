class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(1e2 + 2, vector<int>(1e2 + 2, -1));
    int uniquePaths(int m, int n) {
        if (n == 1 && m == 1) return 1;
        if (n < 1 || m < 1) return 0;

        int& ret = dp[m][n];
        if (~ret) return ret;
        
        int ch1 = uniquePaths(m - 1, n);
        int ch2 = uniquePaths(m, n - 1);

        return ret = ch1 + ch2;
    }
};