class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (const auto& row : matrix) {
            if (row.front() <= target && row.back() >= target) {
                if (binary_search(row.begin(), row.end(), target)) return true;
            }
        }
        return false;
    }
};
