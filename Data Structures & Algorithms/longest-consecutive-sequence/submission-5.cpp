class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        unordered_set<int> nums_set{nums.begin(), nums.end()};
        int longest{}, streak{};

        for (int num : nums_set) {
            if (!nums_set.contains(num-1)) {
                streak = 1;

                while (nums_set.contains(++num)) ++streak;

                if (streak > longest) longest = streak;
            }
        }

        return longest;
    }
};
