class Solution {
public:
    int numberOfDays(int year, int month) {
        // Your code goes here
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            return 29;
        }
 
        return daysInMonth[month - 1];
    }
};