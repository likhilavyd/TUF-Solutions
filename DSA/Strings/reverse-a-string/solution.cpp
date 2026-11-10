class Solution {
public:
    string reverseString(string s) {
        // Write your code here
        int N = s.size();
        int left = 0;
        int right = N - 1;

        while (left < right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        } 
        return s;
    }
};
