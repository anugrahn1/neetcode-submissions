class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;


        unordered_map<char, int> s1_freq;
        for (char c : s1) {
            ++s1_freq[c];
        }

        unordered_map<char, int> s2_freq;
        int l = 0;
        for (int r = 0; r < s2.size(); ++r) {
            ++s2_freq[s2[r]];
            if (r - l + 1 >= s1.size()) {
                if (s1_freq == s2_freq) return true;
                --s2_freq[s2[l]];
                if (s2_freq[s2[l]] == 0) s2_freq.erase(s2[l]);
                ++l;
            }
        }
        return false;
    }

};
