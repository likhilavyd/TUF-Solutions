class Solution {
private:
    void printNumbers(int number, int N) {
        if (number == 0) {
            return;
        }
 
        if (number < N) {
            cout << " ";
        }
 
        cout << number;
 
        printNumbers(number - 1, N);
    }

public:
    void countDown(int N) {
         // Your code goes here
        printNumbers(N, N);
 
        cout << '\n';
    }
};