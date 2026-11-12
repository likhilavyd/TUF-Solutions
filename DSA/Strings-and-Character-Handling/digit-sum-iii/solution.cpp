class Solution {
public:
    int digitSum(int N) {
        // Your code goes here
        if (N == 0) {
            return 0;
        }
        int lastDigit = N % 10;
        int remainingSum = digitSum(N / 10);
        return lastDigit + remainingSum;
    }
};