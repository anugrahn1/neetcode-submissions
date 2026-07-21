class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        double prev = 0;
        int ans = 0;
        vector<int> idx(position.size());
        iota(idx.begin(), idx.end(), 0);

        sort(idx.begin(), idx.end(), [&position](int a, int b) {
            return position[a] > position[b];
        });

        for (int index : idx) {
            double time = static_cast<double>((target - position[index])) / speed[index];
            if (time > prev) { // slower than car in front is own fleet
                prev = time;
                ++ans;
            }
        }
        return ans;
    }
};
