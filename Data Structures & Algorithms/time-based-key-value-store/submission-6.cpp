class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> list;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        list[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto& vec = list[key];
        if (vec.size() == 0) return "";
        auto closest = vec[0];

        int l = 0;
        int r = vec.size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (vec[mid].first > timestamp) {
                r = mid - 1;
            }
            else if (vec[mid].first < timestamp) {
                l = mid + 1;
                closest = vec[mid];
            } 
            else {
                return vec[mid].second;
            }
        }
        
        if (closest.first > timestamp) return "";
        return closest.second;
    }
};
