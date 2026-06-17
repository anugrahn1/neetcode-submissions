class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suffix(nums.size());
        suffix.back() = 1;
        for (int i = nums.size() - 2; i >= 0; --i) {
            suffix[i] = nums[i+1] * suffix[i+1];
        }

        vector<int> prefix(nums.size());
        prefix[0] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            prefix[i] = nums[i-1] * prefix[i-1];
        }

        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            res.push_back(prefix[i] * suffix[i]);
        }
        return res;
    }
    
    template<typename T>
    void print(const vector<T>& v) {
        for (const auto& e : v) cout << e << ", ";
        cout << endl;
    }

};
