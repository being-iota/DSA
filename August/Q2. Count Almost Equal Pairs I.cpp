class Solution {
public:
    int countPairs(std::vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isAlmostEqual(nums[i], nums[j])) {
                    ans++;
                }
            }
        }

        return ans;
    }

private:
    bool isAlmostEqual(int x, int y) {
        string s1 = to_string(x);
        string s2 = to_string(y);

        while (s1.length() < s2.length()) {
            s1 = "0" + s1;
        }
        while (s2.length() < s1.length()) {
            s2 = "0" + s2;
        }

        int diffCount = 0;
        vector<int> diffIndex;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                diffCount++;
                diffIndex.push_back(i);
                if (diffCount > 2) {
                    return false;
                }
            }
        }

        if (diffCount == 0) {
            return true;
        }
        if (diffCount == 2) {
            swap(s1[diffIndex[0]], s1[diffIndex[1]]);
            return s1 == s2;
        }

        return false;
    }
};