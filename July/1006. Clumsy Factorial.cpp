class Solution {
public:
    int clumsy(int n) {
         if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2 * 1;
        if (n == 3) return 3 * 2 / 1;

        int result = 0;
        int current = n;
        n--;
        result = current * n / (n - 1) + (n - 2);
        n = n-3;

        while (n >= 4) {
            result -= n * (n - 1) / (n - 2) - (n - 3);
            n = n-4;
        }
        if (n == 3) result -= 3 * 2 / 1;
        else if (n == 2) result -= 2 * 1;
        else if (n == 1) result -= 1;

        return result;
    }
};

// iss question me hume ek pattern dhundna hai jisse hume factorial nikalna hai
// clumsy factorial mtlb ki factorial ke beech me * / + - ka pattern hai
