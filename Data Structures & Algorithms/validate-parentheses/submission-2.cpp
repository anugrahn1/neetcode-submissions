class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> parens = {{'}', '{'}, {']', '['}, {')', '('}};
        for (char c : s) {
            if (c == '{' || c == '(' || c == '[') {
                open.push(c);
            } else {
                if (open.empty()) return false;
                char popped = open.top();
                open.pop();
                if (popped != parens[c]) return false;
            }
        }
        if (!open.empty()) return false;
        return true;
    }
};
