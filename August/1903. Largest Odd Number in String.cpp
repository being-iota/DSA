class Solution {
public:
    string largestOddNumber(string num) {
       int n = num.size();
    int lastOddIndex = -1;  
    for (int i = n - 1; i >= 0; --i) {
        int digit = num[i] - '0';
        if (digit % 2 != 0) {
            lastOddIndex = i;
            break;
        }
    }
    if (lastOddIndex == -1) {
        return "";
    }
    string result = "";
    for (int i = 0; i <= lastOddIndex; ++i) {
        result += num[i];
    }

    return result;
}
};