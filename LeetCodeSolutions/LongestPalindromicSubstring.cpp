class Solution {
public:
    string longestPalindrome(string s) {
        return longestPalindromerecursion(s);
    }
        string findPalindrome(string s, int left, int right)
        {
            int N = s.size();
            int l = left;
            int r = right;
            while (left >= 0 && right <= N - 1 && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        }

        string longestPalindromerecursion(string s) {
            int n = s.size();
            if (n <= 1) return s;

            string lgst;

            string str;
            for (int i = 0; i < n - 1; i++) {
                str = findPalindrome(s, i, i);
                if (str.size() > lgst.size()) {
                    lgst = str;
                }
                str = findPalindrome(s, i, i + 1);
                if (str.size() > lgst.size()) {
                    lgst = str;
                }
            }

            return lgst;
        }
};