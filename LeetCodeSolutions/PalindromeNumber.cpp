class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = 0;
        if (x < 0)
            return false;
        string num = to_string(x);
        if (num.length() % 2 == 1) {

            while (tmp <= (num.length() - 1) / 2) {
                if (num[tmp] != num[num.length() - 1 - tmp])
                    return false;
                tmp++;
            }
        }
        else {
            while (tmp <= num.length() / 2) {
                if (num[tmp] != num[num.length() - 1 - tmp])
                    return false;
                tmp++;
            }
        }
        return true;
    }
};