class Solution {
public:
    int countOddDigit(int n) {

        int d = 0;
 
        while (n > 0) {

            int lastDigit = n % 10;

            if (lastDigit % 2 != 0) {
                d = d + 1;
            }
            n = n / 10;
        }
 
        return d;
    }
};