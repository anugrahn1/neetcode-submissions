class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int num : nums) {
            ++count[num];
        }

        for (auto p : count) {
            freq[p.second].push_back(p.first);
        }

        vector<int> res;
        for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
            for (auto val : *it) {
                if (res.size() == k) return res;
                res.push_back(val);
            }
        }
        return res;
    }
};
