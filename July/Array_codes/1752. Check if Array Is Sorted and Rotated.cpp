class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breakPoints = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                breakPoints++;
            }
        }

        return breakPoints <= 1;
    }
};