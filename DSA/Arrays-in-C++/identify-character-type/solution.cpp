class Solution {
public:
    string identifyCharacterType(char ch) {
        // Write your code here
        if (ch >= 'A' && ch <= 'Z') return "Uppercase";
        if (ch >= 'a' && ch <= 'z') return "Lowercase";
        if (ch >= '0' && ch <= '9') return "Digit";
        return "Special Character";
    }
};
