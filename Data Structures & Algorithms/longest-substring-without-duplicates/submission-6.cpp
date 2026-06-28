class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int l = 0;
        int maxLen = 0;

        for (int r = 0; r < s.length(); ++r) {
            while (seen.contains(s[r])) {
                seen.erase(s[l]);
                ++l;
            }
            maxLen = max(maxLen, r - l + 1);
            seen.insert(s[r]);
        }
        return maxLen;
    }
};
