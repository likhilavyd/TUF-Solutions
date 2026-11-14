class Solution {
public:
    bool isArmstrong(int n) {
        // Your code goes here
        int original = n;
 
        int k = 0, temp = n;
 
        while (temp > 0) {
            k++;
            temp /= 10;
        }
 
        int sum = 0;
        temp = n;
        
        while (temp > 0) {
            int digit = temp % 10;
            
            sum += pow(digit, k);
            
            temp /= 10;
        }
 
        return sum == original;
    }
};