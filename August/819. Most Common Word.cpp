class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    for (char& c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }
        unordered_map<string, int> wordCount;
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        stringstream ss(paragraph);
        string word;
        while (ss >> word) {
            if (bannedSet.find(word) == bannedSet.end()) {
                wordCount[word]++;
            }
        }
        string mostCommon = "";
        int maxCount = 0;
        for (auto& entry : wordCount) {
            if (entry.second > maxCount) {
                mostCommon = entry.first;
                maxCount = entry.second;
            }
        }

        return mostCommon;
    }
};