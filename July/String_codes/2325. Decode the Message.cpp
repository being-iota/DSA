class Solution {
public:
    string decodeMessage(string key, string message) {
        char charMap[26] = {0};
        char currentChar = 'a';
        
        for (char c : key) {
            if (c != ' ' && charMap[c - 'a'] == 0) {
                charMap[c - 'a'] = currentChar++;
            }
        }
        
        string decodedMessage = "";
        for (char c : message) {
            if (c == ' ') {
                decodedMessage = decodedMessage + ' ';
            } else {
                decodedMessage += charMap[c - 'a'];
            }
        }
        
        return decodedMessage;
    }
};
