class Solution {
public:
    int reverseNumber(int n) {
        int num = 0;

        int lastDigit = 0;

        while ( n > 0) {
            lastDigit = n % 10;
            num = 10*num + lastDigit;
            n /= 10;
        }
        return num;
    }
};