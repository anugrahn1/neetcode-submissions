class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min_speed = numeric_limits<int>::max();
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left <= right) {
            int speed = (left + right) / 2;
            long total = 0;
            for (int pile : piles) {
                total += (pile + speed - 1) / speed;
            }
            if (total <= h) {
                min_speed = speed;
                right = speed-1;
            }
            else left = speed+1;
        }
        return min_speed;
    }
};
