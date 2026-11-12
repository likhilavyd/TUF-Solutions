class Solution {
public:
    int power(int base, int exponent) {
        // Your code goes here
        if (exponent == 0) {
            return 1;
        }
        return base * power(base, exponent - 1);
    }
};