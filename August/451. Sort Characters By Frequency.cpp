class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        
        vector<string> buckets(s.size() + 1);
        
        for (auto& it : freqMap) {
            char c = it.first;
            int freq = it.second;
            buckets[freq].append(freq, c);
        }
        

        string result;
        for (int i = s.size(); i > 0; i--) {
            if (!buckets[i].empty()) {
                result.append(buckets[i]);
            }
        }
        
        return result;
    }
};
