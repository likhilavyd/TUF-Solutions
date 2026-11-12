class Solution {
public:
    int countDigits(int N) {
        // Your code goes here
        if (N < 10) {
            return 1;
        }
        return 1 + countDigits(N / 10);
    }
};