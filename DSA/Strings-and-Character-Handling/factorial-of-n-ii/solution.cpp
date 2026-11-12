class Solution {
public:
    long long factorial(int N) {
        // Your code goes here
        if (N == 0 || N == 1) {
            return 1;
        }
         return N*factorial(N - 1);
    }
};