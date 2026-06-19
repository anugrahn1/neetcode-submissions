class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> indexes;

        for (int i = 0; i < numbers.size(); ++i) {
            int cur = numbers[i];
            int key = target - cur;
            if (auto it = indexes.find(key); it != indexes.end()) {
                return vector<int>{it->second, i+1};
            }
            indexes.insert(make_pair(cur, i+1));
        }
    }
};
