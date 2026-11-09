class Solution {
public:
    int sumTillN(int N) {
        // Write your code here
        int sum = 0;
        for (int i = 0; i <= N; i++){
            sum += i;
        }
        return sum;
    }
};