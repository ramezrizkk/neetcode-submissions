class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = 0;
        int zero_idx = 0;
        int mult = 1;
        for (int i = 0; i <nums.size(); i++) {
            if (nums[i] == 0) {
                zero_idx = i;
                zero_count++;
            }
            else {
                mult *= nums[i];
            }
        }
        vector<int> ret(nums.size(), 0);
        if (zero_count >= 2) return ret;
        else if (zero_count == 1) {
            ret[zero_idx] = mult;
            return ret;
        }
        else {
            for (int i = zero_idx; i < nums.size(); i++) {
                ret[i] = mult / nums[i];
            }
            return ret;
        }
    }
};