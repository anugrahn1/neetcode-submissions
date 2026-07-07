class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed = 1;
        while (true) {
            long total = 0;
            for (int pile : piles) {
                int time_req = 0;
                int temp = pile;
                while (temp > 0) {
                    temp -= speed;
                    ++time_req;
                }
                total += time_req;
            }
            if (total <= h) return speed;
            ++speed;
        }
    }
};
