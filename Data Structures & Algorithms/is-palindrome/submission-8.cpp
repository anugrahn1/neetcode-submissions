class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s, [](char c) {
            return !isalnum(c);
        });


        int left = 0;
        int right = s.size()-1;
        
        while (left < right) {

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
