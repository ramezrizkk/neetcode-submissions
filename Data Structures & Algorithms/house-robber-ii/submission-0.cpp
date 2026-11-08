class Solution {
private:
    vector<vector<int>> memo;

    int solve(int i, const vector<int>& nums, bool can) {
        if (i >= nums.size() || (i == nums.size() - 1 && !can)) return 0;
        if (memo[i][can] != -1) return memo[i][can];

        if (i == 0) can = false;
        int robCurrent = nums[i] + solve(i + 2, nums, can);
        
        if (i == 0) can = true;
        int skipCurrent = solve(i + 1, nums, can);

        return memo[i][can] = max(robCurrent, skipCurrent);
    }

public:
    int rob(vector<int>& nums) {
        memo.assign(nums.size(), vector<int>(2, -1));
        return solve(0, nums, true);
    }
};
