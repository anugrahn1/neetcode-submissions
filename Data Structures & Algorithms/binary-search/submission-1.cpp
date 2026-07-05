class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();

        while (l < r) {
            int i = (l + r) / 2;
            if (nums[i] == target) return i;
            else if (nums[i] > target) r = i;
            else l = i+1;
        }
        
        return -1;
    }
};
