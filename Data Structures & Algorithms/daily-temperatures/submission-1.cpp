class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        stack<pair<int, int>> stk;

        int i = 0;
        for (int temp : temperatures) {
            while (!stk.empty() && stk.top().first < temp) {
                auto temp_ind_pair = stk.top();
                stk.pop();
                int stk_t = temp_ind_pair.first;
                int stk_i = temp_ind_pair.second;
                res[stk_i] = i - stk_i;
            }
            stk.push(std::make_pair(temp, i++));
        }
        return res;
    }
};
