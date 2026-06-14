class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> indexes;
        int i = 0;
        for_each(nums.begin(), nums.end(), [&indexes, &i](int num) {
            indexes[num] = i++;
        });

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (indexes.contains(target-num) && indexes[target-num] != i){
                vector<int> res = {indexes[target-num], i};
                sort(res.begin(), res.end());
                return res;
            }
        }
    }
};
