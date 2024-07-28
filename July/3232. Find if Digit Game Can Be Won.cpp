class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int sumSingleDigit = 0;
    int sumDoubleDigit = 0;
    int totalSum = 0;
    
    for(int num : nums) {
        totalSum = totalSum + num;
        if(num < 10) {
            sumSingleDigit = sumSingleDigit+ num;
        } else if(num < 100) {
            sumDoubleDigit += num;
        }
    }
    
    int sumOthersForSingleDigit = totalSum - sumSingleDigit;
    int sumOthersForDoubleDigit = totalSum - sumDoubleDigit;
    
    return (sumSingleDigit > sumOthersForSingleDigit) || (sumDoubleDigit > sumOthersForDoubleDigit);
}

};