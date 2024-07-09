class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int Leftsum=0;
        int Rightsum=0;

        for(int i=0;i<n;i++){
            Rightsum+=nums[i];
        }
         for(int i=0;i<n;i++){
            Rightsum-=nums[i];
            if(Rightsum==Leftsum){
                return i;
            }
            Leftsum+=nums[i];
        }
        return -1;
    }
};