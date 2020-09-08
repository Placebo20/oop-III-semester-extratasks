class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.size())
            return s;
        vector<string> r(numRows);
        int row = 0;
        int move = 1;
        for (int i = 0; i < s.size(); i++) {
            if (row == numRows - 1)
                move = -1;
            if (row == 0)
                move = 1;
            r[row] += s[i];
            row += move;
        }

        string result;
        for (int i = 0; i < numRows; i++) {
            result += r[i];
        }
        return result;
    }
};