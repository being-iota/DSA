class Solution {
public:
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int i = 0;
      for(i=0;i<N;i++){
        if(arr[i]==K)
        return i;
    }
    return 1;
}