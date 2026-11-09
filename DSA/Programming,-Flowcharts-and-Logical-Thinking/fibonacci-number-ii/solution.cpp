class Solution {
public:
    int fibonacci(int N) {
        // Write your logic here
        int ans = 0;
        if (N == 0) ans = 0;
        else if (N == 1) ans = 1;
        else {
            ans = fibonacci(N-1) + fibonacci(N-2);
        }
        return ans;
    }
};