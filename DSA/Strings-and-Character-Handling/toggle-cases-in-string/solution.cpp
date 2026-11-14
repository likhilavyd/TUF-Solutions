class Solution {
public:
    string toggleCase(string s) {
        // Write your code here
        int n = s.size();
 
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
 
        return s;
    }
};
