class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;


        while (l <= r) {
            int mid = (l+r) / 2;
            int num = nums[mid];
            if (num == target) return mid;

            // left side is sorted
            if (nums[l] <= num) {
                if (nums[l] <= target && num > target) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (nums[r] >= target && num < target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return -1;
        
    }
};
