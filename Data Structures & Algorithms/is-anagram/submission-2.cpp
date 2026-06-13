class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[26]{};

        for (char c : s) {
            ++counts[char_to_index(c)];
        }

        for (char c : t) {
            --counts[char_to_index(c)];
        }
        for (int i : counts) {
            if (i != 0) return false;
        }
        return true;
    }

    int char_to_index(char c) {
        return c - 'a';
    }
};
