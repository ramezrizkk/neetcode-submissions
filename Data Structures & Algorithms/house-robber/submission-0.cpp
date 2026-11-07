class Solution {
private:
    vector<int> memo;

    int solve(int i, const vector<int>& nums) {
        if (i >= nums.size()) return 0;
        if (memo[i] != -1) return memo[i];

        int robCurrent = nums[i] + solve(i + 2, nums);
        int skipCurrent = solve(i + 1, nums);

        return memo[i] = max(robCurrent, skipCurrent);
    }

public:
    int rob(vector<int>& nums) {
        memo.assign(nums.size(), -1);
        return solve(0, nums);
    }
};