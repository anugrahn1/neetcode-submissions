class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        map<pair<int, int>, unordered_set<char>> squares;

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char val = board[r][c];
                if (val == '.') continue;

                auto map_key = make_pair(r/3, c/3);
                if (rows[r].contains(val) || cols[c].contains(val) || squares[map_key].contains(val)) return false;
                rows[r].insert(val);
                cols[c].insert(val);
                squares[map_key].insert(val);
            }
        }

        return true;
    }
};
