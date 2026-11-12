class Solution {
private:
    bool checkFromEnds(const string& s, int left, int right) {
        if (left >= right) {
            return true;
        }
        if (s[left] != s[right]) {
            return false;
        }
        return checkFromEnds(s, left + 1, right - 1);
    }
 
public:
    bool isPalindrome(string s) {
        // Your code goes here
        int n = s.size();
        return checkFromEnds(s, 0, n - 1);
    }
};