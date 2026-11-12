#include <iostream>
using namespace std;

class Solution {
private:
    int reverseHelper(int N, int result) {
        if (N == 0) {
            return result;
        }
        int lastDigit = N % 10;
        result = result * 10 + lastDigit;
        return reverseHelper(N / 10, result);
    }

public:
    int reverseNumber(int N) {
        return reverseHelper(N, 0);
    }
};

