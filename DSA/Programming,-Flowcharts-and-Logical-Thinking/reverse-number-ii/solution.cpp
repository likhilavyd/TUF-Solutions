class Solution {
public:
    int reverseNumber(int N) {
        // Write your logic here
        int num = 0;

        int lastDigit = 0;

        while ( N > 0) {
            lastDigit = N % 10;
            num = 10*num + lastDigit;
            N /= 10;
        }
        return num;
    }
};