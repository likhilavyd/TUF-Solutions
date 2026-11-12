class Solution {
private:
    void printNumbers(int number, int N) {
        if (number > N) {
            return;
        }
 
        if (number > 1) {
            cout << " ";
        }
 
        cout << number;
 
        printNumbers(number + 1, N);
    }

public:
    void countUp(int N) {
         // Your code goes here
        printNumbers(1, N);
 
        cout << '\n';
    }
};