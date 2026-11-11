class Solution {
public:
    string isLeapYear(int year) {
        // Your code goes here
        if (year%400 == 0) return "Yes";
        if (year%100 == 0) return "No";
        if (year%4 == 0) return "Yes";
        else return "No";
    }
};