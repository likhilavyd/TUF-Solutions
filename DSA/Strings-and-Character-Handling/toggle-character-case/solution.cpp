class Solution {
public:
    char toggleCase(char ch) {
        // Write your code here
        if (ch >= 'A' && ch <= 'Z') {
            return (char)('a' + (ch - 'A'));
        }
        if (ch >= 'a' && ch <= 'z') {
            return (char)('A' + (ch - 'a'));
        }
        return ch;
    }
};