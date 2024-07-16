// isko solve krne ki 3 approaches hai sorting, Set, 2 pointer
// 2 pointer approach is efficient one 
// Time Complexity: O(n+m)
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
    vector<int> result;
    int i = 0, j = 0;
     while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                if (result.empty() || result.back() != arr1[i]) {
                    result.push_back(arr1[i]);
                }
                i++;
            } else if (arr2[j] < arr1[i]) {
                if (result.empty() || result.back() != arr2[j]) {
                    result.push_back(arr2[j]);
                }
                j++;
            } else { 
                if (result.empty() || result.back() != arr1[i]) {
                    result.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }

        while (i < n) {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
        }

        
        while (j < m) {
            if (result.empty() || result.back() != arr2[j]) {
                result.push_back(arr2[j]);
            }
            j++;
        }

        return result;
    }
};
// isme hmne 2 pointer i or j ka use kia hai -> fir hmne 3 cases handle kia hai
//  -> cases mtlb ki agar dono array me same element hai to ek hi baar print hoga  
// -> agar arr1[i] < arr2[j] hai to arr1[i] print hoga or i++ hoga
// -> agar arr2[j] < arr1[i] hai to arr2[j] print hoga or j++ hoga
// -> agar dono same hai to ek hi baar print hoga or i++, j++ hoga
// -> last me jo bache hai unko print krna hai
// -> isme hmne ek condition lgai hai ki agar result empty hai to hi push kro nhi to nhi kro
// -> isse hm duplicate elements ko handle kr skte hai
// -> last me result return krdo
// -> Time Complexity: O(n+m) hai
// -> Space Complexity: O(n+m) hai
// -> ye approach efficient hai
