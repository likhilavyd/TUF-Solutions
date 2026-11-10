class Solution {
public:
    bool isPalindrome(int n) {
        int copy = n;

        int num = 0;

        int lastDigit = 0;

        while ( n > 0) {
            lastDigit = n % 10;
            num = num*10 + lastDigit;
            n /= 10;
        }
        
        if ( num == copy ){
            return true;
        }
        
            return false;
        
    }
};