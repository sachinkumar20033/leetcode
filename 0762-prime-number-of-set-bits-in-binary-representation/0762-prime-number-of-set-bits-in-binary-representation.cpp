class Solution {
public:
 bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
    int countPrimeSetBits(int left, int right) {
         int ans = 0;

        for (int num = left; num <= right; num++) {
            int x = num;
            int count = 0;

            while (x > 0) {
                count += x & 1;
                x >>= 1;
            }

            if (isPrime(count)) {
                ans++;
            }
        }

        return ans;
    }
};