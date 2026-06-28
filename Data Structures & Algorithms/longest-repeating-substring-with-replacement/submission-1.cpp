class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxLen = 0;

        unordered_set<char> chars(s.begin(), s.end());

        for (char c : chars) {
            int num_c = 0;
            int l = 0;
            for (int r = 0; r < s.length(); ++r) {
                if (s[r] == c) ++num_c;
                while (r - l + 1 - num_c > k) {
                    if (s[l] == c) --num_c;
                    ++l;
                }

                maxLen = max(maxLen, r - l + 1);
            }
        }
        return maxLen;
    }
};
