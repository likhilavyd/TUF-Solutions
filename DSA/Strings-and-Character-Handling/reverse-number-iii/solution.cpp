#include <iostream>
using namespace std;

class Solution {
private:
    // Build the reversed number one digit at a time
    int reverseHelper(int N, int result) {
        // Base case: all digits have been processed
        if (N == 0) {
            return result;
        }

        // Get the last digit
        int lastDigit = N % 10;

        // Append it to the result
        result = result * 10 + lastDigit;

        // Continue with the remaining digits
        return reverseHelper(N / 10, result);
    }

public:
    // Return the reversed number using recursion
    int reverseNumber(int N) {
        // Start with an empty result represented by 0
        return reverseHelper(N, 0);
    }
};

