class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        if (strs.size() <= 0) return str;
        for (int i = 1; i <= strs[0].size(); i++) {
            string word = strs[0].substr(0, i);
            bool match = true;
            int j = 1;
            for (j = 1; j < strs.size(); j++) {
                if (i > strs[j].size() || word != strs[j].substr(0, i)) {
                    match = false;
                    break;
                }
            }
            if (!match) {
                return str;
            }
            str = word;
        }
        return str;
    }
};