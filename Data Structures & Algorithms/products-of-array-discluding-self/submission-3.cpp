class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod{1};
        int num_zeros{0};

        for (int num : nums) {
            if (num == 0) {
                ++num_zeros;
            } else {
                prod *= num;
            }
        }

        if (num_zeros > 1) return vector<int>(nums.size(), 0);

        vector<int> res(nums.size());

        if (num_zeros == 1) {
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] != 0)
                    res[i] = 0;
                else
                    res[i] = prod;
            }
            return res;
        }

        for (int i = 0; i < nums.size(); ++i) {
            res[i] = prod / nums[i];
        }
        return res;

    }

};
