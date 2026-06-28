class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;

        unordered_set<char> seen;

        int l = 0;
        int maxLen = 0;
        int curLen = 0;
        for (int r = 0; r < s.length(); ++r) {

            while (seen.contains(s[r])) {
                seen.erase(s[l]);
                --curLen;
                ++l;
            }
            if (!seen.contains(s[r])) {
                ++curLen;
                maxLen = max(maxLen, curLen);
                seen.insert(s[r]);
            }
        }
        return maxLen;
    }
};
