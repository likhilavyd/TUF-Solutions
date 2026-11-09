class Solution {
public:
    int countDigits(int N) {
        // Write your code here
        int cnt = 0;

        if (N == 0) cnt = 1;

        while (N > 0){
            cnt += 1;
            N /= 10;
        }
        return cnt;
    }
};