class Solution {
public:
    int romanCharToInt(char ch) {
        int tmp = 0;
        switch (ch) {
        case 'I':
            tmp = 1;
            break;
        case 'V':
            tmp = 5;
            break;
        case 'X':
            tmp = 10;
            break;
        case 'L':
            tmp = 50;
            break;
        case 'C':
            tmp = 100;
            break;
        case 'D':
            tmp = 500;
            break;
        case 'M':
            tmp = 1000;
            break;
        }
        return tmp;
    }
    int romanToInt(string s) {
        if (s.size() <= 0)
            return 0;
        int result = romanCharToInt(s[0]);
        for (int i = 1; i < s.size(); i++) {
            int previously = romanCharToInt(s[i - 1]);
            int current = romanCharToInt(s[i]);

            if (previously < current) {
                result = result - previously + (current - previously);
            }
            else {
                result += current;
            }
        }
        return result;
    }

};