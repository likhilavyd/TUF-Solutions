class Solution {
public:
    int countDigit(int n) {
        
        int cnt = 0;

        if (n == 0)
            cnt = 1;

        while (n > 0){
            cnt += 1;
            n /= 10;
        }
        return cnt;
    }
};