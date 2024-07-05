#include <iostream>

int mySqrt(int x) {
    if (x == 0) return 0;

    int left = 1, right = x, result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid <= x / mid) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int x;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> x;
    
    int result = mySqrt(x);
    std::cout << "The square root of " << x << " rounded down to the nearest integer is " << result << std::endl;

    return 0;
}
