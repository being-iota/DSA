class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    int n = nums.size();

        while (k-- > 0) {
            int min_index = 0;
            for (int i = 1; i < n; ++i) {
                if (nums[i] < nums[min_index]) {
                    min_index = i;
                }
            }
            nums[min_index] *= multiplier;
        }
        return nums;
    }
};