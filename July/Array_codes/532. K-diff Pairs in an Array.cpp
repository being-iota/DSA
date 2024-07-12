class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0; 
        unordered_map<int, int> numCounts;
        int count = 0;
        
        for (int num : nums) {
            numCounts[num]++;
        }

        for (auto& pair : numCounts) {
            if (k == 0) {
                if (pair.second > 1) {
                    count++;
                }
            } else {
                if (numCounts.find(pair.first + k) != numCounts.end()) {
                    count++;
                }
            }
        }
        
        return count;
    }
};