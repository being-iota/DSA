class Solution {
public:
    int minChanges(int n, int k) {
    if ((n | k) != n) {
        return -1;
    }

    int changes = 0;
    while (n > 0 || k > 0) {
        if ((n & 1) != (k & 1)) {
            if ((n & 1) == 1) {
                changes++;
            } else {
                return -1;
            }
        }
        n >>= 1;
        k >>= 1;
    }

    return changes;
}
};