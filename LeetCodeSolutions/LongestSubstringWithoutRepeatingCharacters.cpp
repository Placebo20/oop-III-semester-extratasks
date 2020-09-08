class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        const int chars = 256;
        int m[chars];
        memset(m, -1, sizeof(m));

        int length = 0;
        int lastpos = -1;
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] != -1 && lastpos < m[s[i]]) {
                lastpos = m[s[i]];
            }
            if (i - lastpos > length) {
                length = i - lastpos;
            }
            m[s[i]] = i;
        }
        return length;
    }
};