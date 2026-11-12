class Solution {
public:
    int productOfDigits(int N) {
        // Your code goes here
        if (N < 10) {
            return N;
        }
        int lastDigit = N % 10;
        int remainingProduct = productOfDigits(N / 10);
        return lastDigit * remainingProduct;
    }
};