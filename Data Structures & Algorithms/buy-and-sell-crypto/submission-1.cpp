class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        int l = 0;
        int r = 1;

        while (r < prices.size()) {
            if (prices[r] < prices[l]) l = r;
            else profit = max(prices[r] - prices[l], profit);
            ++r;
        }
        return profit;
    }
};
