// BRUTE FORCE APPROACH
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for(int i = 1; i < n; i++){ 
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};


// OPTIMAL APPROACH
// #include <bits/stdc++.h>
 
// using namespace std;
// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   max = findLargestElement(arr2, n);
//   cout << "The largest element in the array is: " << max<<endl;
//   return 0;
// }


