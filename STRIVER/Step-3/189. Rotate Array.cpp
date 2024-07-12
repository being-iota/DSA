class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
         reverse(nums.begin(), nums.end()); //entire array reverse
         reverse(nums.begin(), nums.begin() + k); //first k elements rev
         reverse(nums.begin() + k, nums.end());   
    }   
};