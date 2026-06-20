class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        int prev = nums[0];
        for (int i = 0; i < nums.size();) {
            int l = i+1;
            int r = nums.size() - 1;
            int cur = nums[i];

            while (l < r) {
                int sum = cur + nums[l] + nums[r];
                if (sum == 0) {
                    res.push_back(vector<int>{cur, nums[l], nums[r]});
                    --r;
                    ++l;
                    while (l < r && nums[l] == nums[l-1]) ++l;
                    while (l < r && nums[r] == nums[r+1]) --r;

                } else if (sum > 0) {
                    --r;
                } else if (sum < 0) {
                    ++l;
                }
            }

            // increment
            while (i < nums.size() && nums[i] == prev ) ++i;
            prev = nums[i];
            // cout << prev << endl;
        }
        return res;
    }
};
