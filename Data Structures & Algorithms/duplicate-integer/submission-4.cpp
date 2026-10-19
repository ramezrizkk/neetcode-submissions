class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> freq;
        bool found = false;
        for (int num : nums){
            if (!freq[num]) freq[num]++;
            else {
                return true;
            }
        }
        return false;
    }
};