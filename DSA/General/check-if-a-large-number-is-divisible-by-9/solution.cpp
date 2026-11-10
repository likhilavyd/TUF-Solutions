class Solution {
public:
    bool isDivisibleBy9(const string& s) {
        // Your code goes here
        long long sum = 0;
        for (char c : s){
            sum+= c - '0';
        }
        return sum % 9 == 0;
    }
};