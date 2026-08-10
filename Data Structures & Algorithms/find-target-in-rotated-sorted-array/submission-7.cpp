class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;


        while (l <= r) {
            int mid = (l+r) / 2;
            int num = nums[mid];
            if (num == target) return mid;
            
            if (nums[r] < num) {
                if (nums[r] >= target || num < target) {
                    l = mid + 1;
                }
                else {
                    r = mid;
                }
            } else if (nums[r] > num) {
                if (nums[r] < target || num > target) {
                    r = mid;
                } else {
                    l = mid + 1;
                }
            } else {
                return -1;
            }
        }
        
    }
};
