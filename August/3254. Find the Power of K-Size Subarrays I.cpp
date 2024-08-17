class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> result;

        for (int i = 0; i <= nums.size() - k; ++i) {
            bool isConsecutive = true;

            for (int j = 0; j < k - 1; ++j) {
                if (nums[i + j + 1] != nums[i + j] + 1) {
                    isConsecutive = false;
                    break;
                }
            }

            if (isConsecutive) {
                result.push_back(nums[i + k - 1]);
            } else {
                result.push_back(-1);
            }
        }

        return result;
    }
};