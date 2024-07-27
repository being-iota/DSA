class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
          int minLength = strs[0].length();
        for (const string& str : strs) {
            minLength = min(minLength, (int)str.length());
        }
         for (int i = 0; i < minLength; i++) {
            char current = strs[0][i];
            for (const string& str : strs) {
                if (str[i] != current) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, minLength);
    }
};