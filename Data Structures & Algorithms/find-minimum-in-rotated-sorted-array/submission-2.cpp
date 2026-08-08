class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int min_num = nums[0];
        while (l < r) {
            int mid = (r+l)/2;
            int num = nums[mid];
            cout << num << endl;
            if (nums[mid+1] < num) return nums[mid+1];
            else if (nums[r] > num) r = mid;
            else l = mid;
            min_num = min(min_num, num);
        }

        return min_num;
    }
};
