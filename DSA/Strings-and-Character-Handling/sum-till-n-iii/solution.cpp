class Solution {
public:
    int sumTillN(int N) {
        // Your code goes here
        if (N == 0) {
            return 0;
        }
         return N + sumTillN(N - 1);
    }
};