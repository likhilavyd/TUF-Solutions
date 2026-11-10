class Solution {
public:
    bool isHarshad(int n) {
        // Your code goes here
        int sum = 0;
        int copy = n;
        while (n >0){
            int lastDigit = n%10;
            sum+= lastDigit;
            n/=10;
        }
        return copy % sum == 0;
    }
};