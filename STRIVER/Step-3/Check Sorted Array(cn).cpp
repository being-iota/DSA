// given array thi a or check krna h ki ye sorted h ya nhi( in the non-decreasing order or not.)
// agr sorted h to return 1 otherwise 0
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1])
      return 0;
  }

  return 1;

}
