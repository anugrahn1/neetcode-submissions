class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) ++left;
            while (right > left && !isalnum(s[right])) --right;
            
            if (tolower(s[left]) != tolower(s[right])){
                cout << s[left] << " " << s[right] << endl;

                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
