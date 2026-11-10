class Solution {
public:
    int largestDigit(int n) {
        int num = 0;
        while (n>0){
            if (n%10 > num){
                num = n%10;
            }
            n/=10;
        }
        return num;
    }
};