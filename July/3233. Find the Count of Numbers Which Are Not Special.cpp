class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int max_limit = static_cast<int>(sqrt(r)) + 1;
        vector<int> primes = generatePrimes(max_limit);
        int specialCount = 0;

        for (int prime : primes) {
            int specialNumber = prime * prime;
            if (specialNumber >= l && specialNumber <= r) {
                ++specialCount;
            }
        }

        return (r - l + 1) - specialCount;
    }
};
vector<int> generatePrimes(int max) {
    vector<bool> is_prime(max + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= max; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= max; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}
