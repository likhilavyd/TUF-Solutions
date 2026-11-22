class Solution {
public:
    void pattern18(int n) {
        for (int i = n - 1; i >= 0; i--) {
        for (char ch = 'A' + i; ch < 'A' + n; ch++) {
            cout << ch << " ";
        }
        cout << endl;
        }
    }
};