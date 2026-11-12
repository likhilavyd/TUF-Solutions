class Solution {
public:
    int countCharacter(string s, char target) {
        // Write your code here
        int count = 0;
         for (char ch : s) {
            if (ch == target) {
                count++;
            }
        }
        return count;
    }
};
