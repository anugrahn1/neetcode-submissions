class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string s : strs) {
            int freq[26]{};

            for (char c : s) {
                ++freq[c - 'a'];
            }

            string key;
            for (int i : freq) {
                key += "#" + to_string(i);
            }
            groups[key].push_back(s);
        }

        vector<vector<string>> anagrams;

        for (auto p : groups) {
            anagrams.push_back(p.second);
        }

        return anagrams;
    }
};
