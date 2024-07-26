class Solution {
public:
    // Approach 1: Using stringstream
    string reverseWords1(string s) {
        istringstream iss(s);
        string word, result;
        vector<string> words;
        
        while (iss >> word) {
            words.push_back(word);
        }
        
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i > 0) result += " ";
        }
        
        return result;
    }
    