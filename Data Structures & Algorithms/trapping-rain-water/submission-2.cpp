class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix(height.size()); // prefix[i] stores the max height to the left of bar, i

        prefix[0] = 0;
        for (int i = 1; i < height.size(); ++i) {
            prefix[i] = max(prefix[i-1], height[i-1]);
        }

        vector<int> postfix(height.size());
        postfix.back() = 0;
        for (int i = height.size() - 2; i >= 0; --i) {
            postfix[i] = max(postfix[i+1], height[i+1]);
        }

        int sum = 0;
        for (int i = 0; i < height.size(); ++i) {
            sum += max(min(prefix[i], postfix[i]) - height[i], 0);

        }
        return sum;
    }
};
