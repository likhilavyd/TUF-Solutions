class Solution {
public:
    string isEvenOrOdd(double num) {
        // Your code goes here
        double n = floor(num);
        if (fmod(n, 2.0)) return "odd";
        return "even";
    }
};