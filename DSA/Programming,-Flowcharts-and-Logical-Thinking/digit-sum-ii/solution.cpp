class Solution {
public:
    int digitSum(int N) {
        // Write your code here
        int sum = 0;

        while (N > 0){
            int lastDigit = N % 10;

            sum += lastDigit;

            N /= 10;
        }
        return sum;
    }
};