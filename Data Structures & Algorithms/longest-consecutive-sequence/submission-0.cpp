class Solution {
public:

    int longestConsecutive(std::vector<int>& nums) {
        // 1. Populate the hash set with all elements
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num : numSet) {
            // 2. Check if 'num' is the START of a sequence.
            // If (num - 1) is NOT in the set, then 'num' is a sequence starter.
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // 3. Count upwards to find the end of this sequence
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                maxLength = std::max(maxLength, currentStreak);
            }
        }

        return maxLength;
    }
};
