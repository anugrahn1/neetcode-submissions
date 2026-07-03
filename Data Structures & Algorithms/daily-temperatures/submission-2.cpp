class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        stack<pair<int, int>> stk;

        int i = 0;
        for (int temp : temperatures) {
            while (!stk.empty() && stk.top().first < temp) {
                auto [stk_t, stk_i] = stk.top();
                stk.pop();
                res[stk_i] = i - stk_i;
            }
            stk.push(std::make_pair(temp, i++));
        }
        return res;
    }
};
