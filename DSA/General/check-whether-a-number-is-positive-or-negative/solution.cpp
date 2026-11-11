class Solution {
public:
    string checkNumberSign(int n) {
        // Your code goes here
        if (n > 0) return "Positive";
        else if (n < 0) return "Negative";
        else return "Zero";
    }
};
