class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> a(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            a[i].first = nums[i];
            a[i].second = i;
        }
        sort (a.begin(), a.end());
        int l = 0, r = nums.size()-1;
        int idx1, idx2;
        while (l < r) {
            if (a[l].first + a[r].first == target) {
                idx1 = a[l].second;
                idx2 = a[r].second;
                break;
            }
            else if (a[l].first + a[r].first < target) l++;
            else r--;

        }
        return {min(idx1, idx2), max(idx1, idx2)};
    };
};
