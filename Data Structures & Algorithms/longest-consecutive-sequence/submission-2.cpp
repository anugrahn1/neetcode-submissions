class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());

        int longest{0};
        int prev = nums[0];
        int streak{1};

        for (int i = 1; i < nums.size(); ++i) {
            if (prev+1 == nums[i]){
                ++streak;
            } 
            else if (prev == nums[i]) {
                continue;
            }
            else {
                if (streak > longest){
                    longest = streak;
                    cout << longest << endl;
                } 
                streak = 1;
            }
            prev = nums[i];
        }

        if (streak > longest) longest = streak;
        return longest;
    }
};
