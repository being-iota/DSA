class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        // pivot
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;

        //successor
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }

        // Swap
        swap(nums[i], nums[j]);
    }

    //Reverse
    reverse(nums.begin() + i + 1, nums.end());
}

};