class Solution {
public:
    string isStrongNumber(int d) {
        // Your code goes here
        int temp = d;
        int sum = 0;
        while (temp > 0){
            int last = temp % 10;
            sum += factorial(last);
            temp /= 10;
        }
        if (sum == d){
            return "Yes";
        }
        return "No";
    }
private:
    int factorial(int n){
        if (n == 0 || n == 1) return 1;
        return n*factorial(n-1);
    }
};
